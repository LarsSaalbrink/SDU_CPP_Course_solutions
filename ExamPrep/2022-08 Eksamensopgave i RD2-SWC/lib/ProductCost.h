#ifndef PRODUCTCOST_H
#define PRODUCTCOST_H

#include <vector>
#include <ostream>

#include "Expense.h"

class ProductCost
{
public:
    ProductCost();
    void addExpense(double amount, const Expense &expense);
    double totalCost() const;

    std::string getProductName() const;
    void setProductName(const std::string &mName);

    friend std::ostream &operator<<(std::ostream &output, const ProductCost &rhs);

private:
    std::string mName;
    std::vector<std::pair<double, Expense>> mExpenses;
};

#endif // PRODUCTCOST_H
