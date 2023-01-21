#include <iostream>
#include <limits>
#include "Safety.h"

//Force user to input a value of a valid type
//No templates as these do not work across files / translation units


void getInput(int &var){
    while(!(std::cin >> var)){
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};

void getInput(unsigned int &var){
    while(!(std::cin >> var)){
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};

void getInput(float &var){
    while(!(std::cin >> var)){
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};

void getInput(double &var){
    while(!(std::cin >> var)){
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};

void getWithinLimits(unsigned int &var, unsigned int min, unsigned int max){
    do{
        getInput(var);
        if((var < min || var > max)){
            std::cout << "Input not within limits, please try again.\n";
        }
    }
    while(!(var >= min && var <= max));
};

void badInput(){
    std::cout << "Invalid input, please try again.\n";
};