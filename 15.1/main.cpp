#include <iostream>
#include "DictionaryLookup.h"
#include "UI.h"
#include "Safety.h"

void getAndCheckInput(std::unordered_set<std::string> &dict){
    std::string input;
    std::cout << "Enter word: ";
    getInput(input);
    std::cout << "Valid matches: " << isAnyValid(dict, input);
}

int main()
{
    //Unordered_set for constant time lookup (hash table -> O(1) time complexity)
    std::unordered_set<std::string> enDict, daDict, deDict;  
    Options currentChoice;

    importFromFile(enDict, "en.wl");
    std::cout << "English dictionary contains " << enDict.size() << " words.\n";

    importFromFile(daDict, "da.wl");
    std::cout << "Danish dictionary contains " << daDict.size() << " words.\n";

    importFromFile(deDict, "de.wl");
    std::cout << "German dictionary contains " << deDict.size() << " words.\n";


    while(1){
        currentChoice = choice2("\nCheck word or exit? (C/E): ", 'C', 'E');
        if(currentChoice == option1){
            //Option 'C' selected
            currentChoice = choice3("\nEnglish, Danish or German? (E/D/G): ", 'E', 'D', 'G');
            //Switch on currentChoice
            switch(currentChoice){
                case(option1):
                    //Option 'E' selected
                    getAndCheckInput(enDict);
                    break;
                case(option2):
                    //Option 'D' selected
                    getAndCheckInput(daDict);
                    break;
                case(option3):
                    //Option 'G' selected
                    getAndCheckInput(deDict);
                    break;
                default:
                    //Invalid option selected
                    badInput();
            }
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
