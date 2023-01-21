#include <iostream>
#include <iomanip>
#include <Pi.h>
#include <Safety.h>
#include <UI.h>

void showPi(Pi &approx){
    std::cout << "Current pi: " << approx.getPi() << "\n";
}

void updateOrder(Pi &approx){
    std::cout << "Enter new order: ";
    int order;
    getInput(order);
    approx.setOrder(order);
    approx.calcPi();
    std::cout << "New pi: " << approx.getPi() << "\n";
}

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

void piInteraction(Pi &approx){
    Options currentChoice = badOption;
    while(currentChoice == badOption){
        currentChoice = choice2("Get current pi or change to different series order (C/D): ", 'C', 'D');

        if(currentChoice == option1){
            //Option 'C' selected
            showPi(approx);
        }
        else if(currentChoice == option2){
            //Option 'D' selected
            updateOrder(approx);
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
}

int main()
{
    std::cout << std::setprecision(8);
    Pi approx = Pi();
    
    while(1){
        Options currentChoice = choice2("\nCalculate approximation of pi using Gregory-Leibniz Series or exit? (C/E): ", 'C', 'E');
        if(currentChoice == option1){
            //Option 'C' selected
            piInteraction(approx);
        }
        else if(currentChoice == option2){
            //Option 'E' selected
            programDone();
            break;
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
    return 0;
}





//Less streamlined version of main(), not using UI.cpp to handle user input
/*
std::cout << "\n\nCalculate approximation of pi using Gregory-Leibniz Series or exit? (C/E): ";
        std::cin >> choice;
        if(choice == 'E' || choice == 'e'){
            std::cout << "Thank you for using the program!\n";
            break;
        }
        else if(choice == 'C' || choice == 'c'){
            std::cout << "Get current pi or change to different series order (C/D): ";
            std::cin >> choice2;
            if(choice2 == 'C' || choice2 == 'c'){
                std::cout << "Current pi: " << approx.getPi() << "\n";
            }
            else if(choice2 == 'D' || choice2 == 'd'){
                std::cout << "Enter new order: ";
                int order;
                getInput(order);
                approx.setOrder(order);
                approx.calcPi();
                std::cout << "New pi: " << approx.getPi() << "\n";
            }
            else{
                 badInput();
            }
        }

        else{
            badInput();
        }
*/