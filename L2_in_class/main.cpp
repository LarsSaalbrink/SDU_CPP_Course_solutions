#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>

void dilemma1(int a, int b){
    std::cout << "x";
}

void dilemma1(double a, double b){
    std::cout << "y";
}

int main()
{
    std::cout << std::setprecision(2);


    while(1){
        int a1 = 2;
        double b1 = 3;

        //Static cast a1
        dilemma1(a1, static_cast<int>(b1));
        
    }
    return 0;
}
