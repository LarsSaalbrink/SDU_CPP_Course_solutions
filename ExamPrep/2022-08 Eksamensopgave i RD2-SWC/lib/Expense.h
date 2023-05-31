#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense
{
public:
    Expense();

    Expense(const std::string &mName, double mCost);

    std::string getName() const;
    void setName(const std::string &mName);

    double getCost() const;
    void setCost(double mCost);

private:
    std::string mName;
    double mCost;
};

#endif // EXPENSE_H
