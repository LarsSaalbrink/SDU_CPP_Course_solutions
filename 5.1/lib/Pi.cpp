#include "Pi.h"
#include "cmath"

Pi::Pi() {
    this->order = 0;
    this->pi = 4;     // 4 is the first term of the series
}

void Pi::setOrder(int order) {
    this->order = order;
}

double Pi::getPi() {
    return this->pi;
}

void Pi::calcPi() {
    double term = 4.0;
    for (double n = 1.0; n <= this->order; n++) {
        term += (4*((static_cast<double>(pow(-1,n)))*(1.0/(2.0*n+1.0))));
    }
    this->pi = term;
}