#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

class QuadraticEquation
{
public:
    QuadraticEquation(double a, double b, double c); 

    ~QuadraticEquation();

    void solve(double a, double b, double c);

private:
    double a;
    double b;
    double c;

    double D;
    double r1;
    double r2;
    double k;
    double omega;

};

#endif // QUADRATIC_EQUATION_H
