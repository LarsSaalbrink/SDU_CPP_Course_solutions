#include "MaclaurinExp.h"
#include <cmath>

#include <iostream>

Exponential::Exponential() {
    this->order = 0;
    this->x = 0.0;
    this->exp = 1.0;  //First term of the series is 1
}

void Exponential::setOrder(const int order) {
    this->order = order;
}

void Exponential::setX(const double x) {
    this->x = x;
}

double Exponential::getExp() const{
    return this->exp;
}
double Exponential::getX() const{
    return this->x;
}

double Exponential::fact(const int n) {  //Recursive solution
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
        this->exp += (pow(this->x, i) / fact(i));
    }
}