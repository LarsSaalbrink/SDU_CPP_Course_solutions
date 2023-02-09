#include <iostream>
#include <iomanip>
#include <MaclaurinExp.h>
#include <Safety.h>
#include <UI.h>

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

void showExp(Exponential &approx){
    std::cout << "e^" << approx.getX() << " = " << approx.getExp() << std::endl;
}

void updateExp(Exponential &approx){  //Value limits prevent overflow of double type
    double x = 101.0;
    while(x > 100.0){
        std::cout << "Enter values for x: (no larger than |100|)   ";
        getInput(x);
    }
    int order = 155;
    while(order > 154){
        std::cout << "Enter order: (no larger than 154)   ";
        getInput(order);
    }

    approx.setX(x);
    approx.setOrder(order);
    approx.calcExp();

    showExp(approx);
}

void expInteraction(Exponential &approx){
    Options currentChoice = badOption;
    while(currentChoice == badOption){
        currentChoice = choice2("\nGet current exp approximation or change parameters (G/C): ", 'G', 'C');
        if(currentChoice == option1){
            //Option 'G' selected
            showExp(approx);
        }
        else if(currentChoice == option2){
            //Option 'C' selected
            updateExp(approx);
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
}

int main(){
    std::cout << std::setprecision(8);
    Exponential approx = Exponential();
    
    while(1){
        Options currentChoice = choice2("\nCalculate approximation for e^x or exit? (C/E): ", 'C', 'E');
        if(currentChoice == option1){
            //Option 'C' selected
            expInteraction(approx);
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
