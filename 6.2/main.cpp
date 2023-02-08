#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>

#define amountofDice 5
#define maxRollAmount 10000000U

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

double rollDice(int rollAmount){
    double diceRollTally = 0;
    for(int i = 0; i < rollAmount; i++){  //Rolling "rollAmount" amount of times
        for(int j = 0; j < amountofDice; j++){ //5 dice each time
            diceRollTally += (rand() % 6) + 1;
        }
    }
    return diceRollTally;
}

int main()
{    
    while(1){
        Options currentChoice = choice2("\nRoll dice or exit? (R/E): ", 'R', 'E');
        if(currentChoice == option1){
            //Option 'R' selected
            std::cout << "Choose amount of times to roll the 5 dice, max " << maxRollAmount << ": ";
            unsigned int rollAmount = (unsigned int)(-1);

            getWithinLimits(rollAmount, 1U, maxRollAmount);

            double diceRollTally = rollDice(rollAmount);
            std::cout << "Rolling " << rollAmount << " times...\n";
            std::cout << "Total across all rolls of all dice: " << diceRollTally << "\n";
            std::cout << "Average across all rolls of all dice: " << (diceRollTally / (rollAmount*amountofDice)) << "\n";
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
