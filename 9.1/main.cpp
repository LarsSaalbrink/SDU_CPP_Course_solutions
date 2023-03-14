#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Safety.h"
#include "UI.h"
#include "Loan.h"

#include "Helpers.h"

//Output benytter ikke den korrekte matematik!

int main(){
    //2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    Options currentChoice;
    Loan* loanObj = nullptr;

    //Bankers rounding test cases
    #if 1
        std::cout << std::fixed << std::setprecision(10);
        std::cout << "Bankers round cases:\n";
        std::cout << "Regular round down: "   << "54321.404 -> "   << bankersRound(54321.404, 2)   << std::endl; 
        std::cout << "Regular round up: "     << "54321.40621 -> " << bankersRound(54321.40621, 2) << std::endl; 
        std::cout << "Bankers round even: "   << "54321.405 -> "   << bankersRound(54321.405, 2)   << std::endl; 
        std::cout << "Bankers round odd: "    << "54321.415 -> "   << bankersRound(54321.415, 2)   << std::endl;
        std::cout << "Tricky bankers round: " << "54321.40507 -> " << bankersRound(54321.40507, 2) << std::endl;
        std::cout << std::fixed << std::setprecision(2);
    #endif

    while(1){
        currentChoice = choice2("\nCalculate debt repayments or exit? (C/E): ", 'C', 'E');
        if(currentChoice == option1){
            //Option 'C' selected
            loanObj = getUserInput();
            std::cout << "Total interest: " << loanObj->totalInterest() << std::endl;
            std::cout << "Total payment: " << loanObj->totalPayment() << std::endl;
            std::cout << "Total interest after tax deduction: " << loanObj->totalInterestTaxDeducted(0.306) << "\n" << std::endl;
            
            loanObj->outputPeriodicalPayments(std::cout);
        }
        else if(currentChoice == option2){
            //Option 'E' selected
            delete loanObj;
            programDone();
            break;
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
    return 0;
}
