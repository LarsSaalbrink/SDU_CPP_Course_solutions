#include <iostream>
#include <string>
#include "UI.h"

Options choice2(std::string message, char choice1, char choice2){
    char choice1_U = toupper(choice1);
    char choice1_l = tolower(choice1);

    char choice2_U = toupper(choice2);
    char choice2_l = tolower(choice2);

    char choice;

    std::cout << message;
    std::cin >> choice;

    if(choice == choice1_U || choice == choice1_l){
        return option1;
    }
    else if(choice == choice2_U || choice == choice2_l){
        return option2;
    }
    else{
        return badOption;
    }
}



static void testFunc(){ 
    std::cout << "Test function called from lib.\n";
}

