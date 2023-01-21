#ifndef MACLAURINEXP_H
#define MACLAURINEXP_H

class Exponential
{
public:
    Exponential(); 

    void setOrder(int order);
    void setX(double x);
    double fact(int n);
    void calcExp();
    double getX();
    double getExp();

private:
    int order;
    double x;
    double exp;
};

#endif // MACLAURINEXP_H
