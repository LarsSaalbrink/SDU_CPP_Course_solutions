#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Date.h"

class Person
{
public:
    Person();
    Person(const std::string& name, const Date& birthDate);

    std::string getName() const;
    Date getBirthdate() const;

    void setName(const std::string& n);
    void setBirthdate(const Date& d);

private:
    std::string mName;
    Date mBirthDate;
};

#endif // PERSON_H