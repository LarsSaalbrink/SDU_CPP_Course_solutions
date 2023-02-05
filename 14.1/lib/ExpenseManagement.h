#ifndef EXPENSEMANAGEMENT_H
#define EXPENSEMANAGEMENT_H

#include <string>
#include <vector>
#include <iterator>

//Type for item name and price
typedef std::pair<std::string, double> itemPricePair;

//Struct for category name and belonging items
struct category_t
{
    std::string name;
    std::vector<itemPricePair> items;
};

class ExpenseManagement {
    public:
        ExpenseManagement(std::string fileName, std::string categoriesFileName);

        bool importFromTxtFile(std::string fileName, bool iscategoriesFile);
        std::string determineSupermarket();
        void addCategories();
        void decodeReceipt();
        void printCategories();

    private:
        std::string supermarket;
        std::vector<std::string> storageString, categoriesString, supermarketOptions;
        std::vector<category_t> categories; 

        std::pair<unsigned int,unsigned int> addItemToCategory(std::string item, std::string category, double price);
        std::string determineCategory(std::string &itemString);
        void decodeNetto();
        double decodeLineNetto(std::string& line, std::pair<unsigned int,unsigned int>& itemAdded);
        void decodeRema1000();
        bool categoryExists(std::string &category);
};

#endif // EXPENSEMANAGEMENT_H
