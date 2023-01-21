#ifndef PI_H
#define PI_H

class Pi
{
public:
    Pi(); 

    void setOrder(int order);
    void calcPi();
    double getPi();

private:
    int order;
    double pi;
};

#endif // PI_H
