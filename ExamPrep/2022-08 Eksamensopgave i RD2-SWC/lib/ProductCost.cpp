#include "ProductCost.h"

ProductCost::ProductCost() : mName("[No product name provided]"), mExpenses() {}

void ProductCost::addExpense(double amount, const Expense &expense)
{
    mExpenses.emplace_back(amount, expense);
}

double ProductCost::totalCost() const
{
    double totalExpense = 0.0;
    for (std::pair item : mExpenses)
    {
        totalExpense += item.first * item.second.getCost();
    }
    return totalExpense;
}

std::string ProductCost::getProductName() const
{
    return this->mName;
}
void ProductCost::setProductName(const std::string &mName)
{
    this->mName = mName;
}

std::ostream &operator<<(std::ostream &output, const ProductCost &rhs)
{
    for(std::pair item : rhs.mExpenses){
        output << item.first 
               << " " 
               << item.second.getName() 
               << " costing " 
               << item.second.getCost() 
               << " per unit. Total: "
               << item.first * item.second.getCost()
               << "\n";
    }
    output << std::endl;
}