#ifndef TIMEANDMATERIALS_H
#define TIMEANDMATERIALS_H

#include <ostream> 
#include <string>
 
class TimeAndMaterials { 
public: 
    TimeAndMaterials(); 
    TimeAndMaterials(double amount); 
 
    virtual ~TimeAndMaterials() = default; 
 
    double getAmount() const { return mAmount; } 
    void setAmount(double amount) { mAmount = amount; } 
 
    virtual double getPrice() const = 0; 
    virtual std::string getText() const = 0; 
    virtual double totalPrice() const { return getAmount()*getPrice(); } 

    friend std::ostream& operator <<(std::ostream& output, const TimeAndMaterials& rhs); 
 
private: 
    double mAmount; 
};

#endif // TIMEANDMATERIALS_H
