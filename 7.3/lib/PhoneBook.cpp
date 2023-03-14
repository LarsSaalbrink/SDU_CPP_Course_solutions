#include "PhoneBook.h"
#include <cstdlib>
#include <iostream>
#include <utility>

//Person class--------------------------------------------------------------

Person::Person(){
    name = "[No name provided]";
    number = "[No number provided]";
}

Person::Person(std::string& name, std::string& number){
    this->name = name;
    this->number = number;
}

void Person::setNumber(const std::string& number){
    this->number = number;
}

void Person::setName(const std::string& name){
    this->name = name;
}

std::string Person::getNumber() const{
    return number;
}

std::string Person::getName() const{
    return name;
}

//Person class end----------------------------------------------------------


//PhoneBook class-----------------------------------------------------------

PhoneBook::PhoneBook(){
    phoneBook = std::vector<Person>();
}

void PhoneBook::addPerson(const Person& person){
    phoneBook.push_back(person);
}

void PhoneBook::printPhoneBook() const{
    int phoneBookSize = phoneBook.size();
    for (int i = 0; i < phoneBookSize; i++){
        std::cout << phoneBook[i].getName() << " - " << phoneBook[i].getNumber() << std::endl;
    }
}

//Find person, return vector iterator to their position in the phoneBook vector
//If incomplete name is provided, return the first person with a name that matches the given string
std::vector<Person>::iterator PhoneBook::findPerson(const std::string& name) const{
    for (int person = 0; person < phoneBook.size(); person++){
        std::string personName = phoneBook[person].getName();
        int nameLength = name.length();

        for(int letter = 0; letter < nameLength; letter++){
            if (personName[letter] != name[letter]){
                break;
            }
            else if (letter == nameLength - 1){
                //Obtain pointer to vector "phoneBook", 
                //discard constness (function is const, so member variables are considered const), 
                //apply .begin() to get iterator to start of vector,
                //increment iterator by "person" amount
                return const_cast<std::vector<Person>&>((this->phoneBook)).begin() + person;
            }
        }
    }
    //If no person is found, return the end of the vector 
    return const_cast<std::vector<Person>&>((this->phoneBook)).end();
}

void PhoneBook::printPerson(const std::string& name) const{
    std::vector<Person>::iterator person = findPerson(name);
    if(person != phoneBook.end()){
        std::cout << person->getName() << " - " << person->getNumber() << std::endl;
    }
    else{
        std::cout << "Person not found" << std::endl;
    }
}

//erase person using findPerson
void PhoneBook::removePerson(const std::string& name){
    std::vector<Person>::iterator person = findPerson(name);
    if(person != phoneBook.end()){
        phoneBook.erase(person);
    }
    else{
        std::cout << "Person not found" << std::endl;
    }
}

//PhoneBook class end--------------------------------------------------------
