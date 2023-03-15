#include "ExpenseManagement.h"
#include <iostream>
#include <fstream>

//First item is index within _categories vector, second item is index within _categories[].items vector
#define LOCATIONPAIR std::pair<unsigned int,unsigned int>

ExpenseManagement::ExpenseManagement(std::string& fileName, std::string& categoriesFileName, std::ostream& messageStream) :
_supermarketOptions({"netto", "rema1000"}) ,_messageStream(messageStream){
    //Supermarket options are fixed, trying to interpret
    //receipts of unknown supermarkets is hubris

    ExpenseManagement::importFromTxtFile(fileName, false);
    ExpenseManagement::importFromTxtFile(categoriesFileName, true);
}

//Read the full file into a string to ensure that operation completes successfully
bool ExpenseManagement::importFromTxtFile(std::string& fileName, bool iscategoriesFile){
    std::ifstream file;
    file.open(fileName);
    if (file.fail()){
        _messageStream << "Could not open file \"" << fileName << "\"\n";
        return true;
    }
    std::string line;
    while (getline(file, line)){
        if(iscategoriesFile){
            _categoriesString.push_back(line);
        }
        else{
            _storageString.push_back(line);
        }
    }
    file.close();
    return false;
}

std::string ExpenseManagement::determineSupermarket(){
    _supermarket = "Unsupported";
    std::vector<std::string> lowerStorageString;

    //Convert storageString to lowercase
    for(unsigned int i = 0; i < _storageString.size(); i++){
        std::string temp = _storageString[i];
        for(unsigned int j = 0; j < temp.size(); j++){
            temp[j] = tolower(temp[j]);
        }
        lowerStorageString.push_back(temp);
    }
    
    //For each supermarket option, search the entire storageString for the name of the supermarket
    for(unsigned int i = 0; i < _supermarketOptions.size(); i++){
        for(unsigned int j = 0; j < lowerStorageString.size(); j++){
            if(lowerStorageString[j].find(_supermarketOptions[i]) != std::string::npos){
                _supermarket = _supermarketOptions[i];
                break;
            }
        }
    }
    return _supermarket;  //return supermarket name to be printed in main
}

void ExpenseManagement::addCategories(){
    _categories.push_back({"[Category unknown]", {}});
    _categories.push_back({"TOTAL", {{{"Total price"}, 0.0}}});

    //Reading from back, add characters until " " as categories
    for(unsigned int i = 0; i < _categoriesString.size(); i++){
        std::string category = "";
        for(int j = _categoriesString[i].size() - 1; j >= 0; j--){
            if(_categoriesString[i][j] == '\t'){
                break;
            }
            category = _categoriesString[i][j] + category;
        }
        //If category is not already in categories, add it
        bool categoryFound = false;
        for(unsigned int j = 0; j < _categories.size(); j++){
            if(_categories[j].name == category){
                categoryFound = true;
                break;
            }
        }
        if(!categoryFound){
            _categories.push_back({category, {}});
        }
    }
}

LOCATIONPAIR ExpenseManagement::addItemToCategory(std::string& item, std::string& category, double price){ 
    bool categoryFound = false;
    //Search categoriesString for the category
    for(unsigned int i = 0; i < _categoriesString.size(); i++){
        if(_categoriesString[i].find(category) != std::string::npos){
            //Category found, add item to category
            for(unsigned int j = 0; j < _categories.size(); j++){
                if(_categories[j].name == category){
                    _categories[j].items.push_back({item, price});
                    categoryFound = true;
                    return std::make_pair(j, (_categories[j].items.size() - 1));
                }
            }
        }
    }
    if(!categoryFound){
        //Add item to "[Unknown category]" and print warning
        _categories[0].items.push_back({item, price});
        _messageStream << "Warning: No category found for item \"" << item << "\"\n";
        return std::make_pair(0, (_categories[0].items.size() - 1));
    }
    return std::make_pair(0, (_categories[0].items.size())); //Should never happen
}

std::string ExpenseManagement::determineCategory(std::string& itemString) const{
    //Search for the itemString in the categoriesString vector
    for(unsigned int i = 0; i < _categoriesString.size(); i++){
        if(_categoriesString[i].find(itemString) != std::string::npos){
            //If the itemString is found, return all letter from the back until the first tab
            for(unsigned int j = _categoriesString[i].size() - 1; j > 0; j--){
                if(_categoriesString[i][j] == '\t'){
                    return _categoriesString[i].substr(j + 1);
                }
            }
        }
    }  
    return "[Unknown category]";
}

double ExpenseManagement::decodeLineNetto(std::string& line, LOCATIONPAIR& itemAddedPos){
    //Start from the back
    unsigned int pos = line.size() - 1;
    bool isDiscount = false;

    //If last symbol is "-", then this is a discount line
    if(line[pos] == '-'){
        pos--;
        isDiscount = true;
    }

    //Read until a space is found to get the price (without comma)
    std::string priceString;
    while(line[pos] != ' '){
        if(line[pos] == ','){
            pos--;
            continue;
        }
        priceString = line[pos] + priceString;
        pos--;
    }
    //Convert priceString to double and /100 to re-add decimal point
    double price = (std::stod(priceString)/100);
    //If this is a discount line, return the negative price
    if(isDiscount){
        return -price;
    }

    //Skip until a non-space is found, then get the item name
    while(line[pos] == ' '){
        pos--;
    }
    std::string item = line.substr(0, pos + 1);

    //Add item to category
    std::string category = determineCategory(item);
    itemAddedPos = addItemToCategory(item, category, price);
    return 0.0;
}

void ExpenseManagement::decodeNetto()
{
    LOCATIONPAIR lastItemAdded;
    unsigned int lineCount = 3;  //Skip the first 3 lines

    //While the first 3 characters of the line are not "   "
    while(_storageString[lineCount].substr(0, 3) != "   "){
        //Remove the "\r" at the end of the line
        _storageString[lineCount].pop_back();

        //If the line is empty, skip it
        if(_storageString[lineCount] == ""){
            lineCount++;
            continue;
        }

        double discountAmount = decodeLineNetto(_storageString[lineCount], lastItemAdded);

        //If discountAmount is not 0, then the last item added was a discount.
        //The discount amount is added to the price of lastItemAdded (negative number)
        if(discountAmount != 0.0){
            _categories[lastItemAdded.first].items[lastItemAdded.second].second += discountAmount;

            //Subtract the discount amount from the total price category
            _categories[1].items[0].second += discountAmount;
        }
        else{
            //Add the price of the item to the total price category
            _categories[1].items[0].second += _categories[lastItemAdded.first].items[lastItemAdded.second].second;
        }
        lineCount++;
    }
}

void ExpenseManagement::decodeRema1000(){
    unsigned int lineCount = 1;  //Skip the first line

    //while the first 4 characters of the line are not "Dato"
    while(_storageString[lineCount].substr(0, 4) != "Dato"){
        //Start from the back, ignore the last character
        unsigned int pos = _storageString[lineCount].size() - 2;

        //Read until a space is found to get the price (without comma)
        std::string priceString;
        while(_storageString[lineCount][pos] != ' '){
            if(_storageString[lineCount][pos] == ','){
                pos--;
                continue;
            }
            priceString = _storageString[lineCount][pos] + priceString;
            pos--;
        }
        //Convert priceString to double and /100 to re-add decimal point
        double price = (std::stod(priceString)/100);

        //Skip until a character which not a space, ',' or number is found
        while(_storageString[lineCount][pos] == ' ' || _storageString[lineCount][pos] == ',' || isdigit(_storageString[lineCount][pos])){
            pos--;
        }
        unsigned int backPos = pos;

        while(_storageString[lineCount].substr(pos - 1, 2) != "  "){
            pos--;
        }
        std::string item = _storageString[lineCount].substr(pos + 1, backPos - pos);

        //Add item to category
        std::string category = determineCategory(item);
        addItemToCategory(item, category, price);

        //Add the price of the item to the total price category
        _categories[1].items[0].second += price;

        lineCount++;
    }
}

void ExpenseManagement::decodeReceipt(){
    std::string supermarket = determineSupermarket();
    if(supermarket == "netto"){
        decodeNetto();
    }
    else if(supermarket == "rema1000"){
        decodeRema1000();
    }
    else{
        _messageStream << "Unsupported supermarket: " << supermarket << std::endl;
    }
    //When done, clear the storageString vector to free up memory
    _storageString.clear();
}

void ExpenseManagement::printCategories() const{
    for(unsigned int i = 0; i < _categories.size(); i++){   
        if(_categories[i].items.size() > 0){
            _messageStream << "\nCategory: " << _categories[i].name << std::endl;
        }
        for(unsigned int j = 0; j < _categories[i].items.size(); j++){
            _messageStream << "Item: " << _categories[i].items[j].first << " - " << _categories[i].items[j].second << std::endl;
        }
    }
}
