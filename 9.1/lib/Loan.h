#ifndef LOAN_H
#define LOAN_H

#include <iostream>

#define percentAfterDeduction 0.694
#define decimals 2

//Mix of danish and english in provided header file from assignment
class Loan
{
public:
    Loan();
    
    // Skal initialisere Loan til at have
    Loan(double debt, int years, int paymentsPerYear, double interestRate);

    // Returns the number of years the loan lasts
    int getYears() const;
    void setYears(int years);

    // Amount of payments per year (terminer)
    int getPaymentsPerYear() const;
    void setPaymentsPerYear(int paymentsPerYear);

    // Debt
    double getDebt() const;
    void setDebt(double debt);

    // Rente
    double getInterestRate() const;
    void setInterestRate(double rate);

    // Administration fee
    double getAdminFee() const;
    void setAdminFee(double fee);

    // Fixed costs
    double getFixedCosts() const;
    void setFixedCosts(double costs);

    // Calculate the interest of a loan for one payment
    double interrest() const;

    // Calculate the interest of a loan for one payment, including administration fee
    double interrestWithAdmin() const;

    // Calculate the total interest of a loan for all the years
    double totalInterest() const;

    // Calculate the total interest of a loan for all the years, including administration fee
    double totalInterestWithAdmin() const;

    // Calculate the total repayment of a loan including the interests
    double totalPayment() const;

    // Calculate the total repayment of a loan including the interests and administration fee
    double totalPaymentWithAdmin() const;

    // Calculate the total net interest of a loan after tax refund
    double totalInterestTaxDeducted() const;

    // Calculate the total net repayment of a loan after tax refund
    double totalPaymentTaxDeduction() const;

    //Bankers rounding
    double bankersRound(double num) const;

    // Output the periodical payments with unpaid balance, paid interest and repayment of each payment to stream object ost
    void outputPeriodicalPayments(std::ostream& ost) const;

private:
    double mDebt, mInterestRate, adminFee, fixedCosts;
    int mYears, mPaymentsPerYear;
};

#endif // LOAN_H
