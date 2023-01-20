#include "QuadraticEquation.h"
#include <cmath>
#include <iostream>

QuadraticEquation::QuadraticEquation(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;

    solve(a, b, c);
}

QuadraticEquation::~QuadraticEquation()
{
    delete &a;
    delete &b;
    delete &c;
    delete &D;
    delete &r1;
    delete &r2;
    delete &k;
    delete &omega;
}

void QuadraticEquation::solve(double a, double b, double c) {
    D = ((b * b) - (4 * a * c));
    std::cout << "D = " << D << "\n";

    if (D > 0) {
        r1 = ((-b - sqrt(D)) / (2 * a));
        r2 = ((-b + sqrt(D)) / (2 * a));
        std::cout << "The roots are real and distinct.\n";
        std::cout << "r1 = " << r1 << "\n";
        std::cout << "r2 = " << r2 << "\n";
    }
    else if (D == 0) {
        r1 = r2 = (-b / (2 * a));
        std::cout << "One single root\n";
        std::cout << "r = " << r1 << "\n";
    }
    else {
        k = (-b / (2 * a));
        omega = (sqrt(-D) / (2 * a));
        std::cout << "The roots are complex and distinct.\n";
        std::cout << "r1 = " << k << " + " << omega << "i\n";
        std::cout << "r2 = " << k << " - " << omega << "i\n";
    }
}
