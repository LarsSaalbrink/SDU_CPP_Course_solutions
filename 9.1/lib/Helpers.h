#ifndef HELPERS_H
#define HELPERS_H

double bankersRound(const double& number, const unsigned int& deci);

void determinePeriodicalPayments(double* outputArray, const double& totalPayment, const double& totalInterest, const int& years, const int& paymentsPerYear);

#endif // HELPERS_H