#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>
#include "Matplotlibcpp.h"
#include <vector>
#include <ctime>

namespace mp = matplotlibcpp;

#define amountofDice 5
#define maxRollAmount 65535U

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

double rollDice(const int rollAmount, std::vector<int>& histogramBins){
    double diceRollTally = 0;
    for(int i = 0; i < rollAmount; i++){  //Rolling "rollAmount" amount of times
        int roundTally = 0;
        for(int j = 0; j < amountofDice; j++){ //5 dice each time
            roundTally += (rand() % 6) + 1;
        }
        diceRollTally += roundTally;
        histogramBins[roundTally]++; 
    }
    return diceRollTally;
}

int main(){    
    srand(time(NULL));

    while(1){
        Options currentChoice = choice2("\nRoll dice or exit? (R/E): ", 'R', 'E');
        if(currentChoice == option1){
            //Option 'R' selected
            std::cout << "Choose amount of times to roll the 5 dice, max " << maxRollAmount << ": ";
            unsigned int rollAmount = static_cast<unsigned int>(-1);
            getWithinLimits(rollAmount, 1U, maxRollAmount);

            std::vector<int> histogramBins(((amountofDice*6)+1), 0);  //Bins 0-5 not used directly, but simplifies indexing
            double diceRollTally = rollDice(rollAmount, histogramBins);
            std::cout << "Rolling " << rollAmount << " times...\n";
            std::cout << "Total across all rolls of all dice: " << diceRollTally << "\n";
            std::cout << "Average across all rolls of all dice: " << (diceRollTally / (rollAmount*amountofDice)) << "\n";

            //Plot histogramBins using matplotlib
            mp::bar(histogramBins);

            //Set xticks
            std::vector<int> xticks = {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<std::string> xticksString = {"6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30"};
            mp::xticks(xticks, xticksString);

            mp::xlim(6, 30);
            mp::title("Histogram of dice roll results");
            mp::show();
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
