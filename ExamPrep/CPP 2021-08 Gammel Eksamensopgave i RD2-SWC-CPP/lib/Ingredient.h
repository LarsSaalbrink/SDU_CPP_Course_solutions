#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

class Ingredient
{
public:
    Ingredient();
    Ingredient(const std::string &name);
    Ingredient(double amount, const std::string &unit, const std::string &name);

    void setAmount(double amount, const std::string &unit);
    double getAmount() const;

    void setName(const std::string &name);
    const std::string &getName() const;

    const std::string &getUnit() const;

    Ingredient operator*(double rhs);

    friend std::ostream &operator<<(std::ostream &output, const Ingredient &rhs);

private:
    double mAmount;
    std::string mUnit, mName;
};

#endif // INGREDIENT_H
