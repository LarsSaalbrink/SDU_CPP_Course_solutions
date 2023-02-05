#include "ExpenseManagement.h"
#include <iostream>
#include <fstream>
#include <sstream>

#define locationPair std::pair<unsigned int,unsigned int>

ExpenseManagement::ExpenseManagement(std::string fileName, std::string categoriesFileName){
    //Supermarket options are fixed, trying to interpret
    //receipts of unknown supermarkets is hubris
    supermarketOptions = {"netto", "rema1000"};

    ExpenseManagement::importFromTxtFile(fileName, false);
    ExpenseManagement::importFromTxtFile(categoriesFileName, true);
}

//Read the full file into a string to ensure that operation completes successfully
bool ExpenseManagement::importFromTxtFile(std::string fileName, bool iscategoriesFile){
    std::ifstream file;
    file.open(fileName);
    if (file.fail()){
        std::cout << "Could not open file \"" << fileName << "\"\n";
        return true;
    }
    std::string line;
    while (getline(file, line)){
        if(iscategoriesFile){
            categoriesString.push_back(line);
        }
        else{
            storageString.push_back(line);
        }
    }
    file.close();
    return false;
}

std::string ExpenseManagement::determineSupermarket(){
    supermarket = "Unsupported";
    std::vector<std::string> lowerStorageString;

    //Convert storageString to lowercase
    for(unsigned int i = 0; i < storageString.size(); i++){
        std::string temp = storageString[i];
        for(unsigned int j = 0; j < temp.size(); j++){
            temp[j] = tolower(temp[j]);
        }
        lowerStorageString.push_back(temp);
    }
    
    //For each supermarket option, search the entire storageString for the name of the supermarket
    for(unsigned int i = 0; i < supermarketOptions.size(); i++){
        for(unsigned int j = 0; j < lowerStorageString.size(); j++){
            if(lowerStorageString[j].find(supermarketOptions[i]) != std::string::npos){
                supermarket = supermarketOptions[i];
                break;
            }
        }
    }
    return supermarket;
}

void ExpenseManagement::addCategories(){
    categories.push_back({"[Category unknown]", {}});
    categories.push_back({"TOTAL", {{{"Total price"}, 0.0}}});

    //Reading from back, add characters until " " as categories
    for(unsigned int i = 0; i < categoriesString.size(); i++){
        std::string category = "";
        for(int j = categoriesString[i].size() - 1; j >= 0; j--){
            if(categoriesString[i][j] == '\t'){
                break;
            }
            category = categoriesString[i][j] + category;
        }
        //If category is not already in categories, add it
        bool categoryFound = false;
        for(unsigned int j = 0; j < categories.size(); j++){
            if(categories[j].name == category){
                categoryFound = true;
                break;
            }
        }
        if(!categoryFound){
            categories.push_back({category, {}});
        }
    }
}

locationPair ExpenseManagement::addItemToCategory(std::string item, std::string category, double price){ 
    bool categoryFound = false;
    //Search categoriesString for the category
    for(unsigned int i = 0; i < categoriesString.size(); i++){
        if(categoriesString[i].find(category) != std::string::npos){
            //Category found, add item to category
            for(unsigned int j = 0; j < categories.size(); j++){
                if(categories[j].name == category){
                    categories[j].items.push_back({item, price});
                    categoryFound = true;
                    return std::make_pair(j, (categories[j].items.size() - 1));
                }
            }
        }
    }
    if(!categoryFound){
        //Add item to "[Unknown category]" and print warning
        categories[0].items.push_back({item, price});
        std::cout << "Warning: No category found for item \"" << item << "\"\n";
        return std::make_pair(0, (categories[0].items.size() - 1));
    }
    return std::make_pair(0, (categories[0].items.size())); //Should never happen
}

std::string ExpenseManagement::determineCategory(std::string &itemString){
    //Search for the itemString in the categoriesString vector
    for(unsigned int i = 0; i < categoriesString.size(); i++){
        if(categoriesString[i].find(itemString) != std::string::npos){
            //If the itemString is found, return all letter from the back until the first tab
            for(unsigned int j = categoriesString[i].size() - 1; j > 0; j--){
                if(categoriesString[i][j] == '\t'){
                    return categoriesString[i].substr(j + 1);
                }
            }
        }
    }  
    return "[Unknown category]";
}

double ExpenseManagement::decodeLineNetto(std::string& line, locationPair& itemAddedPos){
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
    locationPair lastItemAdded;
    unsigned int lineCount = 3;  //Skip the first 3 lines

    //While the first 3 characters of the line are not "   "
    while(storageString[lineCount].substr(0, 3) != "   "){
        //Remove the "\r" at the end of the line
        storageString[lineCount].pop_back();

        //If the line is empty, skip it
        if(storageString[lineCount] == ""){
            lineCount++;
            continue;
        }

        double discountAmount = decodeLineNetto(storageString[lineCount], lastItemAdded);

        //If discountAmount is not 0, then the last item added was a discount.
        //The discount amount is added to the price of lastItemAdded (negative number)
        if(discountAmount != 0.0){
            categories[lastItemAdded.first].items[lastItemAdded.second].second += discountAmount;

            //Subtract the discount amount from the total price category
            categories[1].items[0].second += discountAmount;
        }
        else{
            //Add the price of the item to the total price category
            categories[1].items[0].second += categories[lastItemAdded.first].items[lastItemAdded.second].second;
        }
        lineCount++;
    }
}

void ExpenseManagement::decodeRema1000(){
    unsigned int lineCount = 1;  //Skip the first line

    //while the first 4 characters of the line are not "Dato"
    while(storageString[lineCount].substr(0, 4) != "Dato"){
        //Start from the back, ignore the last character
        unsigned int pos = storageString[lineCount].size() - 2;

        //Read until a space is found to get the price (without comma)
        std::string priceString;
        while(storageString[lineCount][pos] != ' '){
            if(storageString[lineCount][pos] == ','){
                pos--;
                continue;
            }
            priceString = storageString[lineCount][pos] + priceString;
            pos--;
        }
        //Convert priceString to double and /100 to re-add decimal point
        double price = (std::stod(priceString)/100);

        //Skip until a character which not a space, ',' or number is found
        while(storageString[lineCount][pos] == ' ' || storageString[lineCount][pos] == ',' || isdigit(storageString[lineCount][pos])){
            pos--;
        }
        unsigned int backPos = pos;

        while(storageString[lineCount].substr(pos - 1, 2) != "  "){
            pos--;
        }
        std::string item = storageString[lineCount].substr(pos + 1, backPos - pos);

        //Add item to category
        std::string category = determineCategory(item);
        addItemToCategory(item, category, price);

        //Add the price of the item to the total price category
        categories[1].items[0].second += price;

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
        std::cout << "Unsupported supermarket: " << supermarket << std::endl;
    }
}

void ExpenseManagement::printCategories(){
    for(unsigned int i = 0; i < categories.size(); i++){   
        if(categories[i].items.size() > 0){
            std::cout << "\nCategory: " << categories[i].name << std::endl;
        }
        for(unsigned int j = 0; j < categories[i].items.size(); j++){
            std::cout << "Item: " << categories[i].items[j].first << " - " << categories[i].items[j].second << std::endl;
        }
    }
}
