#include "Lot.h"

#include <iomanip>
#include <sstream>
#include <string>

Lot::Lot() 
: mAddress("No address provided"), mMinPrice(0.0), mSize(0){

}

Lot::Lot(std::string address, double minPrice, int size) 
: mAddress(address), mMinPrice(minPrice), mSize(size)
{
}

Lot::Lot(const Lot& rhs) 
: mAddress(rhs.getAddress()), mMinPrice(rhs.getMinimumPrice()), mSize(rhs.getSize())
{
}

Lot::Lot(Lot&& rhs)
: mAddress(rhs.getAddress()), mMinPrice(rhs.getMinimumPrice()), mSize(rhs.getSize())
{
    rhs.setAddress("");
    rhs.setMinimumPrice(0);
    rhs.setSize(0);
}

int Lot::getSize() const {
    return mSize;
}

void Lot::setSize(int size) {
    mSize = size;
}

double Lot::getMinimumPrice() const
{
    return mMinPrice;
}

void Lot::setMinimumPrice(double price)
{
    mMinPrice = price;
}

std::string Lot::getAddress() const {
    return mAddress;
}

void Lot::setAddress(const std::string& addr) {
    mAddress = addr;
}

std::ostream& operator <<(std::ostream& output, const Lot& rhs){
    output << std::setw(20)
           << std::left
           << rhs.getAddress()
           << std::setw(9)
           << std::right
           << rhs.getMinimumPrice()
           << std::setw(6)
           << rhs.getSize();

    return output;
}

std::istream& operator >>(std::istream& input, Lot& rhs){
    std::string inBuf;
    
    std::getline(input, inBuf, ';');
    rhs.setAddress(inBuf);
    std::getline(input, inBuf, ';');
    rhs.setMinimumPrice(std::stod(inBuf));
    std::getline(input, inBuf, ';');
    rhs.setSize(std::stoi(inBuf));
    
    return input;
}

