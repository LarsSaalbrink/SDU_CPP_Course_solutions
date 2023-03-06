#ifndef UI_H
#define UI_H

#include "Loan.h"

enum Options{
    option1,
    option2,
    badOption,
};

Options choice2(std::string message, char choice1, char choice2);

void programDone();


///// User interface specific to assignment 9.1 /////
Loan* getUserInput();

#endif // UI_H