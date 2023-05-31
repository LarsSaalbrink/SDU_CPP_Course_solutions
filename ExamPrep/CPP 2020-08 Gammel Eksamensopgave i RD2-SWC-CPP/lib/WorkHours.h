#ifndef WORKHOURS_H
#define WORKHOURS_H

#include "TimeAndMaterials.h"

class WorkHours : public TimeAndMaterials{
public:
    WorkHours(double standardPrice = 0);
    WorkHours(double standardPrice, double extraPrice);
    WorkHours(double standardPrice, double extraPrice, int amount);

    double getPrice() const override; 
    std::string getText() const override;

    void setStandardPrice(double price);
    void setExtraPrice(double price);
    void setDescription(std::string text);

private:
    double mStandardPrice, mExtraPrice;
    std::string mText = "No work description available";
};



#endif // WORKHOURS_H
