#include <iostream>
#include <iomanip>
#include <Clothing.h>
#include <Safety.h>


int main()
{
    float m, h;
    int age;
    char choice;

    std::cout << std::setprecision(4);

    while(1){
        std::cout << "\n\nNew set of clothing sizes or exit? (N/E): ";
        std::cin >> choice;
        if(choice == 'E' || choice == 'e'){
            std::cout << "Thank you for using the program!\n";
            break;
        }

        if(choice == 'N' || choice == 'n'){
            std::cout << "Enter your height in cm: ";
            getInput(h);
            std::cout << "Enter your weight in kg: ";
            getInput(m);
            std::cout << "Enter your age as a whole number: ";
            getInput(age);
            Clothing *Person;
            Person = new Clothing(m, h, age);
            std::cout << "Your hat size is: " << Person->getHat() << " cm\n";
            std::cout << "Your jacket size is: " << Person->getJacket() << " cm\n";
            std::cout << "Your waist size is: " << Person->getWaist() << " cm\n";
        }
        else{
            std::cout << "Invalid input, please try again.\n";
        }
    }
    
    return 0;
}
