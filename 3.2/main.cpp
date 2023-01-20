#include <iostream>
#include <iomanip>
#include <QuadraticEquation.h>
#include <Safety.h>


int main()
{
    double a, b, c;
    char choice;

    std::cout << std::setprecision(2);

    while(1){
        std::cout << "\n\nSolve quadratic equation or exit? (S/E): ";
        std::cin >> choice;
        if(choice == 'E' || choice == 'e'){
            std::cout << "Thank you for using the program!\n";
            break;
        }

        if(choice == 'S' || choice == 's'){
            std::cout << "Enter a: ";
            getInput(a);
            std::cout << "Enter b: ";
            getInput(b);
            std::cout << "Enter c: ";
            getInput(c);
            QuadraticEquation* Equation;
            Equation = new QuadraticEquation(a, b, c);
        }
        else{
            std::cout << "Invalid input, please try again.\n";
        }
    }
    
    return 0;
}
