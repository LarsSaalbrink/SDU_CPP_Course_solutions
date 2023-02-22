#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>
#include <PhoneBook.h>
#include <string>

bool running = 1;

void programDone(PhoneBook &phoneBook){  //Argument present to conform to template type 
    std::cout << "Thank you for using the program!\n";
    running = 0;
}

void addInteraction(PhoneBook &phoneBook){
    std::string name, number;
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

void findPerson(PhoneBook &phoneBook){
    std::string name;
    std::cout << "Enter name: ";
    getInput(name);
    phoneBook.printPerson(name);
}

void addOrRemove(PhoneBook &phoneBook){
    action2(phoneBook, &addInteraction, &removeInteraction, &choiceTwo, "Add or remove? (A/R)", 'A', 'R');
}

void printOrFind(PhoneBook &phoneBook){
    action2(phoneBook, &PhoneBook::printPhoneBook, &findPerson, &choiceTwo, "Print all or find one person? (A/F)", 'A', 'F');
}

void usePhoneBook(PhoneBook &phoneBook){
    action2(phoneBook, &addOrRemove, &printOrFind, &choiceTwo, "Change content or inspect? (C/I)", 'C', 'I');
}

int main()
{
    PhoneBook phoneBook;
    Options currentChoice;

    while(running){
        action2<PhoneBook>(phoneBook, &usePhoneBook, &programDone, &choiceTwo, "Use phonebook or exit? (U/E)", 'U', 'E');
    }
    return 0;
}
