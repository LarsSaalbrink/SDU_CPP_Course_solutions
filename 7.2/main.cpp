#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>
#include <ArrayInt100.h>
#include <string>
#include <ctime>

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

int main()
{
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    ArrayInt100 theArray = ArrayInt100();
    
    while(1){
        Options currentChoice = choice2("\nDemonstrate ArrayInt100 methods or exit? (D/E): ", 'D', 'E');
        if(currentChoice == option1){
            //Option 'D' selected
            std::cout << "Array content:\n";
            theArray.print();
            std::cout << "\nNew random values, 0-99:\n";
            theArray.fillRandom(0, 99);
            theArray.print();
            std::cout << "\nMax value: " << theArray.findMax() << std::endl;
            std::cout << "Number of 42's: " << theArray.countSpecific(42) << std::endl;
            std::cout << "Swapping values:\n";
            theArray.swapAll();
            theArray.print();
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
