#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>

#define amountofDice 5
#define maxRollAmount 10000000

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

double rollDice(int rollAmount, int *histogramBins){
    double diceRollTally = 0;
    for(int i = 0; i < rollAmount; i++){  //Rolling "rollAmount" amount of times
        int roundTally = 0;
        for(int j = 0; j < amountofDice; j++){ //5 dice each time
            roundTally += (rand() % 6) + 1;
        }
        diceRollTally += roundTally;
        histogramBins[roundTally-5]++; 
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
            getWithinLimits(rollAmount, 1, maxRollAmount);

            int histogramBins[((amountofDice*6)-4)] = {0};  //Possible values are 5-30, so 26 bins
            double diceRollTally = rollDice(rollAmount, &histogramBins[0]);
            std::cout << "Rolling " << rollAmount << " times...\n";
            std::cout << "Total across all rolls of all dice: " << diceRollTally << "\n";
            std::cout << "Average across all rolls of all dice: " << (diceRollTally / (rollAmount*amountofDice)) << "\n";




            //Not drawing histogram yet, find something better than terminal first
            //Matplotlib seems like a good option, see README for installation instructions



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
