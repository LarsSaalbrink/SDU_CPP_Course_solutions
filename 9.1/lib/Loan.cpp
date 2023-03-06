#include <cmath>
#include <iostream>
#include <iomanip>
#include "Loan.h"
#include "Helpers.h"

Loan::Loan(){}

Loan::Loan(double debt, int years, int paymentsPerYear, double interestRate){
    mDebt = debt;
    mYears = years;
    mPaymentsPerYear = paymentsPerYear;
    mInterestRate = interestRate;
}

int Loan::getYears() const{
    return mYears;
}
void Loan::setYears(int years){
    mYears = years;
}

int Loan::getPaymentsPerYear() const{
    return mPaymentsPerYear;
}
void Loan::setPaymentsPerYear(int paymentsPerYear){
    mPaymentsPerYear = paymentsPerYear;
}

double Loan::getDebt() const{
    return mDebt;
}
void Loan::setDebt(double debt){
    mDebt = debt;
}

double Loan::getInterestRate() const{
    return mInterestRate;
}
void Loan::setInterestRate(double rate){
    mInterestRate = rate;
}

double Loan::totalInterest() const{
    return bankersRound(((mDebt * mInterestRate) 
                         / 
                         (1 - pow((1+mInterestRate), -(mYears*mPaymentsPerYear)))), 2);
}

double Loan::totalPayment() const{
    return bankersRound((mDebt + totalInterest()), 2);
}

double Loan::totalInterestTaxDeducted(double taxDeductionRate) const{
    return bankersRound((totalInterest() * (1-taxDeductionRate)), 2);
}

void Loan::outputPeriodicalPayments(std::ostream& ost) const{
    double periodicalPayments[(mYears*mPaymentsPerYear*3)+3];  //+3 for period 0

    determinePeriodicalPayments(periodicalPayments, totalPayment(), totalInterest(),mYears, mPaymentsPerYear);

    //Output table with remaining debt, interest paid total, and repayment
    ost << std::setw(40) << "Remaining debt" << std::setw(30) << "Interest paid total" << std::setw(30) << "Repayment" << std::endl;
    for(int i = 0; i <= mYears*mPaymentsPerYear*3; i += 3){
        std::string period = "Period " + std::to_string(i/3) + ": ";
        ost << period
            << std::setw(40-period.length()) << *(periodicalPayments + i) 
            << std::setw(30) << *(periodicalPayments + i + 1)
            << std::setw(30) << *(periodicalPayments + i + 2) << std::endl;  
    }
}
