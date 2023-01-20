#include "CLothing.h"

Clothing::Clothing()
{
}

Clothing::Clothing(float m, float h, int age) {
    this->age = age;

    //Calculations as per assignment definitions
    this->hat = ((m/h)*41.25*pi);
    this->jacket = (((h*m)/335) + (Clothing::jacketAging()));
    this->waist = ((m/2.6)+(Clothing::waistAging()));
}

Clothing::~Clothing()
{
    delete &hat;
    delete &jacket;
    delete &waist;
    delete &age;
}

//+0.125 inches of jacket size for every 10 years over 30
float Clothing::jacketAging() {
    if(age > 30){
        return ((0.125*inch)*((age-30)/10));
    }

    return 0.0;
}

//+0.1 inches of waistline for every 2 years over 28
float Clothing::waistAging() {
    if(age > 28){
        return ((0.1*inch)*((age-28)/2));
    }

    return 0.0;
}

float Clothing::getHat() const {
    return hat;
}

float Clothing::getJacket() const {
    return jacket;
}

float Clothing::getWaist() const {
    return waist;
}

