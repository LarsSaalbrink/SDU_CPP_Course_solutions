#include "Product.h"

#include <cstring>
#include <iostream>

Product::Product() : mName(nullptr), mLengthOfName(0), mPrice(0){}

Product::Product(const std::string &name, double price)
{
    setName(name);
    mPrice = price;
}

Product::~Product(){
    delete[] mName;
};

// Copy Constructors
Product::Product(const Product &rhs){
    *this = rhs;  //Call copy assignment operator
}
Product& Product::operator=(const Product &rhs){
    if ((this != &rhs) && (rhs.getName() != nullptr)) {      //check for self-assignment
        this->setName(rhs.getName());
        this->mPrice = rhs.getPrice();
    }
    return *this;
}

// Move Constructors
Product::Product(Product &&rhs){
    *this = std::move(rhs);  //Call move assignment operator
}
Product& Product::operator=(Product &&rhs){
    if ((this != &rhs) && (rhs.getName() != nullptr)) {     
        this->setName(rhs.getName());
        this->mPrice = rhs.getPrice();

        delete[] rhs.mName;
        rhs.mName = nullptr;
        rhs.mLengthOfName = 0;
        rhs.mPrice = 0;
    }

    return *this;
}

void Product::setName(const std::string &name)
{
    mName = new char [name.size()+1];
    std::strcpy (mName, name.c_str());
    mLengthOfName = name.size();
}

