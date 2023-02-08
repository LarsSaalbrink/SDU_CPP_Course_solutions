#ifndef SAFETY_H
#define SAFETY_H

#include <iostream>
#include <limits>

template <typename T>
void getInput(T &var){
    while(!(std::cin >> var)){
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};

template <typename T>
void getWithinLimits(T &var, T min, T max){
    do{
        getInput<T>(var);
        if((var < min || var > max)){
            std::cout << "Input not within limits, please try again.\n";
        }
    }
    while(!(var >= min && var <= max));
};

void badInput();

#endif // SAFETY_H