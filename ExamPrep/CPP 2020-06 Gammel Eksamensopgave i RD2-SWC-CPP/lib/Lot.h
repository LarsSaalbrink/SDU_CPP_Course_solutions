#ifndef LOT_H
#define LOT_H

#include <string>

class Lot
{
public:
    Lot();
    Lot(std::string address, double minPrice, int size);
    Lot(const Lot& rhs);  //Copy constructor
    Lot(Lot&& rhs);       //Move constructor

    int getSize() const;
    void setSize(int size);

    double getMinimumPrice() const;
    void setMinimumPrice(double price);

    std::string getAddress() const;
    void setAddress(const std::string& addr);

    friend std::ostream& operator <<(std::ostream& output, const Lot& rhs); 
    friend std::istream& operator >>(std::istream& input, Lot& rhs); 


private:
    std::string mAddress;
    double mMinPrice;
    int mSize;
};

#endif // LOT_H
