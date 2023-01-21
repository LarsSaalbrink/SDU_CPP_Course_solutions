#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <Gameshow.h>


//Monty Hall Game Simulation

int main()
{
    char choice;
    char switchDoors;

    while(1){
        std::cout << "\n\nSimulate another 1000 games or exit? (S/E): ";
        std::cin >> choice;
        if(choice == 'E' || choice == 'e'){
            std::cout << "Thank you for using the program!\n";
            break;
        }

        if(choice == 'S' || choice == 's'){
            std::cout << "Switch doors? (Y/N): ";
            do{
                getInput(switchDoors);
                if(switchDoors != 'Y' && switchDoors != 'y' && switchDoors != 'N' && switchDoors != 'n'){
                    std::cout << "\nInvalid input, please try again.\n";
                }
            }
            while(switchDoors != 'Y' && switchDoors != 'y' && switchDoors != 'N' && switchDoors != 'n');
            
            std::cout << "\nOut of 1000 games, you won " << play(switchDoors) << " times.\n\n";
        }
        else{
            std::cout << "Invalid input, please try again.\n";
        }
    }
    
    return 0;
}
