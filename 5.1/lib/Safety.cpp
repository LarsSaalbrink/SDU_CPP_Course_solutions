#include <iostream>
#include "Safety.h"

void badInput(){
    std::cout << "Invalid input, please try again.\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
};