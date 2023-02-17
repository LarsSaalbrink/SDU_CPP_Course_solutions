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

void badInput();

#endif // SAFETY_H