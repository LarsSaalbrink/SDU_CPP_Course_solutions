#include "Loan.h"
#include <cstdlib>
#include <cmath>

Loan::Loan()
{
}

Loan::Loan(double debt, int years, int paymentsPerYear, double interestRate)
{
    mDebt = debt;
    mYears = years;
    mPaymentsPerYear = paymentsPerYear;
    mInterestRate = interestRate;
}

int Loan::getYears() const
{
    return mYears;
}
void Loan::setYears(int years)
{
    mYears = years;
}

int Loan::getPaymentsPerYear() const
{
    return mPaymentsPerYear;
}
void Loan::setPaymentsPerYear(int paymentsPerYear)
{
    mPaymentsPerYear = paymentsPerYear;
}

double Loan::getDebt() const
{
    return mDebt;
}
void Loan::setDebt(double debt)
{
    mDebt = debt;
}

double Loan::getInterestRate() const
{
    return mInterestRate;
}
void Loan::setInterestRate(double rate)
{
    mInterestRate = rate;
}

double Loan::getAdminFee() const
{
    return adminFee;
}
void Loan::setAdminFee(double fee)
{
    adminFee = fee;
}

double Loan::getFixedCosts() const
{
    return fixedCosts;
}
void Loan::setFixedCosts(double costs)
{
    fixedCosts = costs;
}

double Loan::interrest() const
{
    return ((mDebt * mInterestRate) / (1 - pow((1 + mInterestRate), (-mYears * mPaymentsPerYear))));
}

double Loan::interrestWithAdmin() const
{
    return ((mDebt * (mInterestRate + adminFee)) / (1 - pow((1 + mInterestRate + adminFee), (-mYears * mPaymentsPerYear))));
}

double Loan::totalInterest() const
{
    return (totalPayment() - mDebt - fixedCosts);
}

double Loan::totalInterestWithAdmin() const
{
    return (totalPaymentWithAdmin() - mDebt - fixedCosts);
}

double Loan::totalPayment() const
{
    return ((interrest()*mYears*mPaymentsPerYear)+fixedCosts);
}

double Loan::totalPaymentWithAdmin() const
{
    return ((interrestWithAdmin()*mYears*mPaymentsPerYear)+fixedCosts);
}

double Loan::totalInterestTaxDeducted() const
{
    return ((totalInterest() * percentAfterDeduction) + (totalPaymentWithAdmin() - totalPayment()));  //Admin fee is not tax deductible
}

double Loan::totalPaymentTaxDeduction() const
{
    return (totalInterestTaxDeducted() + mDebt);
}

double Loan::bankersRound(double num) const{
    num *= 10.0*decimals;
    if(fmod(num, 1) >= 0.5){
        return (ceil(num) / (10.0*decimals));
    }
    else{
        return (floor(num) / (10.0*decimals));
    }
}

void Loan::outputPeriodicalPayments (std::ostream& ost) const
{
    //set precision
    ost.setf(std::ios::fixed);
    ost.precision(decimals);
    
    //Calculate and Print table of payment number, remaining debt, interest and repayment paid each quarter. Starting from year 0 to mYears
    unsigned int paymentNumber = 0;
    double remainingDebt = mDebt;
    double repayment = interrest();

    ost << "Fixed costs (payment 0): " << fixedCosts << std::endl;
    ost << "Payment number\tRemaining debt\tInterest\tRepayment self\tTax rebate\tTotal repayment" << std::endl;
    for(int i = 0; i < mYears; i++){
        for(int j = 0; j < mPaymentsPerYear; j++){
            paymentNumber++;
            remainingDebt = (remainingDebt - repayment + (remainingDebt * mInterestRate));
            ost << paymentNumber << "\t\t" 
                << remainingDebt << "\t\t" 
                << bankersRound(remainingDebt * mInterestRate) 
                << "\t\t" << bankersRound(repayment*percentAfterDeduction) 
                << "\t\t" << bankersRound(repayment*(1-percentAfterDeduction)) 
                << "\t\t" << bankersRound(repayment) << std::endl;
        }
    }
    
}
