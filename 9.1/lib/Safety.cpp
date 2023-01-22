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

void getInput(std::string &var){
    while(!(std::cin >> var)){
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};

void badInput(){
    std::cout << "Invalid input, please try again.\n";
};