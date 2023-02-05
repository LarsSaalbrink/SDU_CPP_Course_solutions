#include <iostream>
#include "ExpenseManagement.h"

int main(int argc, char* argv[])
{
    //Read file names from arguments
    std::string fileName, categoriesFileName;
    //If no arguments are given, use default files
    if(argc != 3){
        std::cout << "Num: " << argc << std::endl;
        std::cout << "Incorrect arguments given, using default files \"netto.txt\" & \"ExpenseCategories.txt\"" << std::endl;
        fileName = "netto.txt";
        categoriesFileName = "ExpenseCategories.txt";
    }
    else{
        fileName = argv[1];
        categoriesFileName = argv[2];
        std::cout << "Using files: " << fileName << " and " << categoriesFileName << std::endl;
    }

    //Set decimal precision to 2
    std::cout << std::cout.precision(2) << std::fixed << "\b";

    ExpenseManagement expenseManager(fileName, categoriesFileName);

    //Print which supermarket receipt is from
    std::string supermarket = expenseManager.determineSupermarket();
    if(supermarket == "Unsupported"){
        std::cout << "Unsupported supermarket, aborting" << std::endl;
        return 1;
    }
    std::cout << "Supermarket: " << supermarket << std::endl;

    //Add item categories
    expenseManager.addCategories();

    //Decode receipt
    expenseManager.decodeReceipt();

    //Print categories
    std::cout << "\n---Registered data---" << std::endl;
    expenseManager.printCategories();
    
    return 0;
}
