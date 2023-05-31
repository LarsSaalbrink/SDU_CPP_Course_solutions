#include "Expense.h"

Expense::Expense() : mName("[No name provided]"), mCost(0.0) {}

Expense::Expense(const std::string &mName, double mCost) : mName(mName), mCost(mCost) {}

std::string Expense::getName() const
{
    return this->mName;
}
void Expense::setName(const std::string &mName)
{
    this->mName = mName;
}

double Expense::getCost() const
{
    return this->mCost;
}
void Expense::setCost(double mCost)
{
    this->mCost = mCost;
}
