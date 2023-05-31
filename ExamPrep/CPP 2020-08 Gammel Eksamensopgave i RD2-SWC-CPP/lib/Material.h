#ifndef Material_H
#define Material_H

#include "TimeAndMaterials.h"

class Material : public TimeAndMaterials{
public:
    Material();
    Material(std::string description, double mUnitPrice);

    void setPrice(double price);
    void setDescription(std::string description);

    double getPrice() const override;
    std::string getText() const override;

private:
    double mUnitPrice;
    std::string mDescription = "No material description available";
};



#endif // Material_H
