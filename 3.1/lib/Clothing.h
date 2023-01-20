#ifndef CLOTHING_H
#define CLOTHING_H

#define pi 3.14159265358979323846
#define inch 2.54
class Clothing
{
public:
    Clothing();
    Clothing(float m, float h, int age);  //kg, cm, years

    ~Clothing();

    float getHat() const;
    float getJacket() const;
    float getWaist() const;

private:
    float hat = 0.0;
    float jacket = 0.0;
    float waist = 0.0;
    int age = 0;
    float jacketAging();
    float waistAging();
};

#endif // CLOTHING_H
