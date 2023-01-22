#include "PhoneBook.h"
#include <cstdlib>
#include <iostream>

//Person class--------------------------------------------------------------

Person::Person()
{
    name = "[No name provided]";
    number = "[No number provided]";
}

Person::Person(std::string name, std::string number)
{
    this->name = name;
    this->number = number;
}

void Person::setNumber(std::string number)
{
    this->number = number;
}

void Person::setName(std::string name)
{
    this->name = name;
}

std::string Person::getNumber()
{
    return number;
}

std::string Person::getName()
{
    return name;
}

//Person class--------------------------------------------------------------


//PhoneBook class-----------------------------------------------------------

PhoneBook::PhoneBook()
{
    phoneBook = std::vector<Person>();
}

void PhoneBook::addPerson(Person person)
{
    phoneBook.push_back(person);
}

void PhoneBook::printPhoneBook()
{
    for (int i = 0; i < phoneBook.size(); i++)
    {
        std::cout << phoneBook[i].getName() << " - " << phoneBook[i].getNumber() << std::endl;
    }
}

//Find person, return vector iterator to their position in the phoneBook vector
std::vector<Person>::iterator PhoneBook::findPerson(std::string name)
{
    for (int person = 0; person < phoneBook.size(); person++)
    {
        for(int letter = 0; letter < name.length(); letter++)
        {
            if (phoneBook[person].getName()[letter] != name[letter])
            {
                break;
            }
            else if (letter == name.length() - 1)
            {
                return phoneBook.begin() + person;
            }
        }
    }
    //If no person is found, return the end of the vector (invalid iterator)
    return phoneBook.end();
}

void PhoneBook::printPerson(std::string name)
{
    std::vector<Person>::iterator person = findPerson(name);
    if(person != phoneBook.end())
    {
        std::cout << person->getName() << " - " << person->getNumber() << std::endl;
    }
    else
    {
        std::cout << "Person not found" << std::endl;
    }
}

//erase person using findPerson
void PhoneBook::removePerson(std::string name)
{
    std::vector<Person>::iterator person = findPerson(name);
    if(person != phoneBook.end())
    {
        phoneBook.erase(person);
    }
    else
    {
        std::cout << "Person not found" << std::endl;
    }
}

//PhoneBook class-----------------------------------------------------------
