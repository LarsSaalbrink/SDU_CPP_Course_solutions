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

Options choice3(std::string message, char choice1, char choice2, char choice3){
    char choice1_U = toupper(choice1);
    char choice1_l = tolower(choice1);

    char choice2_U = toupper(choice2);
    char choice2_l = tolower(choice2);

    char choice3_U = toupper(choice3);
    char choice3_l = tolower(choice3);

    char choice;

    std::cout << message;
    std::cin >> choice;

    if(choice == choice1_U || choice == choice1_l){
        return option1;
    }
    else if(choice == choice2_U || choice == choice2_l){
        return option2;
    }
    else if(choice == choice3_U || choice == choice3_l){
        return option3;
    }
    else{
        return badOption;
    }
}

void programDone(){
    std::cout << "Thank you for using the program!\n";
}
