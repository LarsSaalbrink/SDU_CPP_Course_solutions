#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
public:
    Product();
    Product(const std::string &name, double price);

    ~Product();

    //Copy Constructors
    Product(const Product& rhs);
    Product& operator=(const Product& rhs);

    //Move Constructors
    Product(Product&& rhs);
    Product& operator=(Product&& rhs);

    // Getters
    const char *getName() const { return (mName == nullptr) ? ("") : (mName); }
    int getLength() const { return mLengthOfName; }
    double getPrice() const { return mPrice; }
    // Setter
    void setName(const std::string &name);

private:
    char *mName;
    int mLengthOfName;
    double mPrice;
};

#endif // PRODUCT_H
