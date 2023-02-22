#ifndef UI_H
#define UI_H

#include <iostream>
#include <limits>

enum Options{
    option1,
    option2,
    badOption,
};

Options choiceTwo(std::string message, char choice1, char choice2);

template <typename T>
void action2(T& var, void (*FP1)(T&), void (*FP2)(T&), Options (*choice)(std::string, char, char), std::string message, char choice1, char choice2){
    Options currentChoice = badOption;
    while(currentChoice == badOption){
        currentChoice = choiceTwo("\n" + message + ": ", choice1, choice2); 
        if(currentChoice == option1){
            //Option 1 selected
            FP1(var);
        }
        else if(currentChoice == option2){
            //Option 2 selected
            FP2(var);
        }
        else{
            //Invalid option selected
            std::cout << "Invalid input, please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
};

template <typename T>
void action2(T& var, void (T::*printPhoneBook)() const, void (*FP2)(T&), Options (*choice)(std::string, char, char), std::string message, char choice1, char choice2){
    Options currentChoice = badOption;
    while(currentChoice == badOption){
        currentChoice = choiceTwo("\n" + message + ": ", choice1, choice2); 
        if(currentChoice == option1){
            //Option 1 selected
            var.printPhoneBook();
        }
        else if(currentChoice == option2){
            //Option 2 selected
            FP2(var);
        }
        else{
            //Invalid option selected
            std::cout << "Invalid input, please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
};

#endif // UI_H
