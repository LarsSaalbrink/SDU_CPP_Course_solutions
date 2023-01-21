#include "MaclaurinExp.h"
#include "cmath"

#include <iostream>

Exponential::Exponential() {
    this->order = 0;
    this->x = 0.0;
    this->exp = 1.0;  //First term of the series is 1
}

void Exponential::setOrder(int order) {
    this->order = order;
}

void Exponential::setX(double x) {
    this->x = x;
}

double Exponential::getExp() {
    return this->exp;
}
double Exponential::getX() {
    return this->x;
}

double Exponential::fact(int n) {  //Recursive solution
    if(n == 0){

        return 1.0;
    }
    else{
        return n * fact(n-1);
    }
}

void Exponential::calcExp() {
    this->exp = 1.0;  
    for(int i = 1; i <= this->order; i++){

        std::cout << "fact " << i << ": " << fact(i) << std::endl;
        std::cout << "pow " << i << ": " << pow(this->x, i) << std::endl;

        this->exp += (pow(this->x, i) / fact(i));
    }
}