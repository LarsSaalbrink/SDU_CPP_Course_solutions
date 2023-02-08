#include <iostream>
#include <iomanip>
#include <Safety.h>


int main()
{
    std::cout << std::setprecision(2);

    char choice;

    while(1){
        std::cout << "\n\nSimulate another population or exit? (S/E): ";
        std::cin >> choice;
        if(choice == 'E' || choice == 'e'){
            std::cout << "Thank you for using the program!\n";
            break;
        }

        int doublingPeriod = 5;      //Days
        int previousPopulation = 0;  //Pounds of crud
        int currentPopulation = 0;
        int daysOfGrowth;

        if(choice == 'S' || choice == 's'){
            std::cout << "Input starting population as whole number: ";
            getInput(currentPopulation);
            std::cout << "Input days of growth: ";
            getInput(daysOfGrowth);
            int day = 1;
            while(day <= daysOfGrowth){
                if(day % doublingPeriod == 0 && day != 1){
                    int temp = currentPopulation;
                    currentPopulation = currentPopulation + previousPopulation;
                    previousPopulation = temp;
                    std::cout << "Day " << day << ": " << currentPopulation << " pounds of crud.\n";
                }
                else{
                    std::cout << "Day " << day << ": " << currentPopulation << " pounds of crud.\n";
                }
                day++;
            }
        }
        else{
            std::cout << "Invalid input, please try again.\n";
        }
    }
    
    return 0;
}
