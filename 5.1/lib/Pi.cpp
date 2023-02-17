#include "Pi.h"
#include "cmath"

Pi::Pi() {
    this->order = 0;
    this->pi = 0;     
}

void Pi::setOrder(int order) {
    this->order = order;
}

double Pi::getPi() const{
    return this->pi;
}

void Pi::calcPi() {
    double term = 0.0;
    bool sign = true;
    for (double n = 0.0; n < this->order; n++) {
        term += (((sign*2)-1)/((2.0*n)+1.0));
        sign = !sign;
    }
    this->pi = 4*term;
}
