#ifndef MACLAURINEXP_H
#define MACLAURINEXP_H
class Exponential{
public:
    Exponential(); 

    void setOrder(const int order);
    void setX(const double x);
    double fact(const int n);
    void calcExp();
    double getX() const;
    double getExp() const;

private:
    int order;
    double x;
    double exp;
};

#endif // MACLAURINEXP_H
