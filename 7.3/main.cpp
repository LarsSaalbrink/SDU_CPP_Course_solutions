#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>
#include <PhoneBook.h>
#include <string>

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

void addInteraction(PhoneBook &phoneBook){
    std::string name;
    std::string number;
    std::cout << "Enter name: ";
    getInput(name);
    std::cout << "Enter number: ";
    getInput(number);
    phoneBook.addPerson(Person(name, number));
}

void removeInteraction(PhoneBook &phoneBook){
    std::string name;
    std::cout << "Enter name: ";
    getInput(name);
    phoneBook.removePerson(name);
}

void addOrRemove(PhoneBook &phoneBook){
    Options currentChoice = badOption;
    while(currentChoice == badOption){
        currentChoice = choice2("\nAdd or remove? (A/R): ", 'A', 'R');
        if(currentChoice == option1){
            //Option 'A' selected
            addInteraction(phoneBook);
        }
        else if(currentChoice == option2){
            //Option 'R' selected
            removeInteraction(phoneBook);
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
}

void printOrFind(PhoneBook &phoneBook){
    Options currentChoice = badOption;
    while(currentChoice == badOption){
        currentChoice = choice2("\nPrint all or find one person? (A/F): ", 'A', 'F');
        if(currentChoice == option1){
            //Option 'A' selected
            phoneBook.printPhoneBook();
        }
        else if(currentChoice == option2){
            //Option 'F' selected
            std::string name;
            std::cout << "Enter name: ";
            getInput(name);
            phoneBook.printPerson(name);
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
}

void usePhoneBook(PhoneBook &phoneBook){
    Options currentChoice = badOption;
    while(currentChoice == badOption){
        currentChoice = choice2("\nChange content or inspect? (C/I): ", 'C', 'I');
        if(currentChoice == option1){
            //Option 'C' selected
            addOrRemove(phoneBook);
        }
        else if(currentChoice == option2){
            //Option 'I' selected
            printOrFind(phoneBook);
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
}

int main()
{
    PhoneBook phoneBook;
    Options currentChoice;
    while(1){
        currentChoice = choice2("\nUse phonebook or exit? (U/E): ", 'U', 'E');
        if(currentChoice == option1){
            //Option 'U' selected
            usePhoneBook(phoneBook);
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
