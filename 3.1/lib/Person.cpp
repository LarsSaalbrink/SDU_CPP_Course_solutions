#include "Person.h"

//Constructor
Person::Person(const std::string& name, const Date& birthDate) : mName(name), mBirthDate(birthDate) {
}

//Getters
std::string Person::getName() const{
    return mName;
}
Date Person::getBirthdate() const{
    return mBirthDate;
}

//Setters
void Person::setName(const std::string& name){
    mName = name;
}
void Person::setBirthdate(const Date& birthDate){
    mBirthDate = birthDate;
}