#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>
#include <Loan.h>
#include <string>
#include <vector>

#include <cmath>

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

void getLoanInfo(Loan &loan){
    double debt = -1.0;
    double interestRate = -1.0;
    double adminFee = -1.0;
    double fixedCosts = -1.0;
    int years = -1;
    int paymentsPerYear = -1;

    std::cout << "Please enter the following information about the loan:\n";
    while(debt <= 0.0){
        std::cout << "Debt: ";
        getInput(debt);
    }
    while(years <= 0){
        std::cout << "Years: ";
        getInput(years);
    }
    while(paymentsPerYear <= 0){
        std::cout << "Payments per year: ";
        getInput(paymentsPerYear);
    }
    while(interestRate < 0.0){
        std::cout << "Yearly interest rate: ";
        getInput(interestRate);
    }
    while(adminFee < 0.0){
        std::cout << "Yearly administration fee rate: ";
        getInput(adminFee);
    }
    while(fixedCosts < 0.0){
        std::cout << "Fixed costs total: ";
        getInput(fixedCosts);
    }

    interestRate /= paymentsPerYear;
    adminFee /= paymentsPerYear;

    loan.setDebt(debt);
    loan.setYears(years);
    loan.setPaymentsPerYear(paymentsPerYear);
    loan.setInterestRate(interestRate);
    loan.setAdminFee(adminFee);
    loan.setFixedCosts(fixedCosts);
}




int main()
{
    Options currentChoice;
    Loan loan;

    while(1){
        currentChoice = choice2("\nLoan calculation or exit? (L/E): ", 'L', 'E');
        if(currentChoice == option1){
            //Option 'L' selected
            getLoanInfo(loan);
            std::cout << "Payments without deduction: " << loan.interrest() << std::endl;
            std::cout << "The total interest without deduction is: " << loan.totalInterestWithAdmin() << std::endl;
            std::cout << "The total payment without deduction is: " << loan.totalPaymentWithAdmin() << std::endl;

            std::cout << "The total interest with deduction is: " << loan.totalInterestTaxDeducted() << std::endl;
            std::cout << "The total payment with deduction is: " << loan.totalPaymentTaxDeduction() << std::endl;

            std::cout << "\nThe periodical payments are:\n";
            loan.outputPeriodicalPayments(std::cout);
        }
        else if(currentChoice == option2){
            //Option 'E' selected
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
