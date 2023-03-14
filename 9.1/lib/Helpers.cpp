#include <cmath>

#include "Helpers.h"

#include <iostream>

double bankersRound(const double& number, const unsigned int& deci){
    double multiplier = pow(10, deci);
    std::string stringNum = std::to_string(number);

    //Find index of decimal point and then remove it
    int decimalIndex = stringNum.find('.');
    stringNum.erase(decimalIndex, 1);

    //variable containing wanted digits
    uint64_t desiredDigits = std::stoi(stringNum.substr(0, decimalIndex+deci));

    //variable containing all unwanted decimals
    std::string extraDecimalsString = stringNum.substr(decimalIndex+deci, stringNum.length());
    if(extraDecimalsString[0] == '0'){  //Zero at [0] dissapears when converting to int, handled here instead
        return (desiredDigits / multiplier);  //Round down the spare decimals
    }
    uint64_t extraDecimals = std::stoi(extraDecimalsString);

    if(extraDecimals == 5*(pow(10, extraDecimalsString.length()-1))){  //Bankers rounding special case
        if(desiredDigits % 2 == 0){  
            return (desiredDigits / multiplier);
        }
        else{
            return ((desiredDigits + 1) / multiplier);
        }
    }
    else{  //Regular rounding
        if(extraDecimals < (5*(pow(10, extraDecimalsString.length()-1)))){  
            return (desiredDigits / multiplier);
        }
        else{
            return ((desiredDigits + 1) / multiplier);
        }
    }
}

void determinePeriodicalPayments(double* outputArray, const double& totalPayment, const double& totalInterest, const int& years, const int& paymentsPerYear){
    double payRate = totalPayment / (years*paymentsPerYear);
    double interestPayRate = totalInterest / (years*paymentsPerYear);
    double debt = totalPayment - totalInterest;
    double interestPaid = 0;

    std::cout << "\nTotal payment: " << totalPayment << std::endl;
    std::cout << "Pay rate: " << payRate << "\n" << std::endl;

    for(int i = 0; i <= years*paymentsPerYear*3; i += 3){
        *(outputArray+i) = bankersRound(debt, 2);
        *(outputArray+i+1) = bankersRound(interestPaid, 2);
        *(outputArray+i+2) = bankersRound(payRate, 2);
        debt -= payRate - interestPayRate;
        interestPaid += interestPayRate;
    }
}
