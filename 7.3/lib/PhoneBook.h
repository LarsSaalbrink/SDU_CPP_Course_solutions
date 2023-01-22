#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <vector>

class Person
{
public:
    Person();
    Person(std::string name, std::string number);

    void setName(std::string name);
    void setNumber(std::string number);

    std::string getName();
    std::string getNumber();

protected:
    std::string name;
    std::string number;
};

class PhoneBook: private Person
{
public:
    PhoneBook();
    
    void addPerson(Person person);
    void removePerson(std::string name);
    void printPhoneBook();
    std::vector<Person>::iterator findPerson(std::string name);
    void printPerson(std::string name);

private:
    std::vector<Person> phoneBook;
};

#endif // PHONEBOOK_H
