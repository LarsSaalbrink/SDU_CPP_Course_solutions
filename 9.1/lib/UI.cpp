#include <iostream>
#include <string>
#include "UI.h"

Options choice2(std::string message, char choice1, char choice2){
    char choice1_U = toupper(choice1);
    char choice1_l = tolower(choice1);

    char choice2_U = toupper(choice2);
    char choice2_l = tolower(choice2);

    char choice;

    std::cout << message;
    std::cin >> choice;

    if(choice == choice1_U || choice == choice1_l){
        return option1;
    }
    else if(choice == choice2_U || choice == choice2_l){
        return option2;
    }
    else{
        return badOption;
    }
}

void programDone(){
    std::cout << "Thank you for using the program!\n";
}


///// User interface specific to assignment 9.1 /////
Loan* getUserInput(){
    double debt;
    int years;
    int paymentsPerYear;
    double interestRate;
    
    std::cout << "Enter debt: ";
    std::cin >> debt;
    std::cout << "Enter years: ";
    std::cin >> years;
    std::cout << "Enter payments per year: ";
    std::cin >> paymentsPerYear;
    std::cout << "Enter interest rate: ";
    std::cin >> interestRate;
    
    return new Loan(debt, years, paymentsPerYear, interestRate);
}

