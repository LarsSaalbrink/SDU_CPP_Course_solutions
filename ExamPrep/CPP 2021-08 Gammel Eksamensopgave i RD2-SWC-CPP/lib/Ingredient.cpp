#include "Ingredient.h"

#include <iomanip>
#include <iostream>

Ingredient::Ingredient() : 
mAmount(0), mUnit("No unit"), mName("No name")
{
}

Ingredient::Ingredient(const std::string &name) : 
mAmount(0), mUnit("No unit"), mName(name)
{
}

Ingredient::Ingredient(double amount, const std::string &unit, const std::string &name) : 
mAmount(amount), mUnit(unit), mName(name)
{
}

void Ingredient::setAmount(double amount, const std::string &unit)
{
    mAmount = amount;
    mUnit = unit;
}

double Ingredient::getAmount() const
{
    return mAmount;
}

void Ingredient::setName(const std::string &name)
{
    mName = name;
}

const std::string &Ingredient::getName() const
{
    return mName;
}

const std::string &Ingredient::getUnit() const
{
    return mUnit;
}

Ingredient Ingredient::operator*(double rhs)
{   
    mAmount *= rhs;
    return *this;
}

std::ostream &operator<<(std::ostream &output, const Ingredient &rhs)
{
    output << std::setw(10) << std::right << rhs.getAmount();
    output << " ";
    output << std::setw(5) << std::left << rhs.getUnit();
    output << " ";
    output << rhs.getName();

    return output;
}
