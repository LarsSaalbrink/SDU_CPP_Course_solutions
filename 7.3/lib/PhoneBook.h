#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <vector>

class Person{
public:
    Person();
    Person(std::string& name, std::string& number);

    void setName(const std::string& name);
    void setNumber(const std::string& number);

    std::string getName() const;
    std::string getNumber() const;

protected:
    std::string name;
    std::string number;
};

class PhoneBook: private Person{
public:
    PhoneBook();
    
    void addPerson(const Person& person);
    void removePerson(const std::string& name);
    void printPhoneBook() const;
    std::vector<Person>::iterator findPerson(const std::string& name) const;
    void printPerson(const std::string& name) const;

private:
    std::vector<Person> phoneBook;
};

#endif // PHONEBOOK_H
