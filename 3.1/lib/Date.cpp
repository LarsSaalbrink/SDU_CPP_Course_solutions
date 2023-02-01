#include "Date.h"

//Constructors
Date::Date() : mYear(0), mMonth(0), mDay(0){
}

Date::Date(unsigned int d, unsigned int m, unsigned int y) : mYear(y), mMonth(m), mDay(d){
}

//Destructor
Date::~Date()
{
    mYear = 0;
    mMonth = 0;
    mDay = 0;
}

//Getters
unsigned int Date::getYear() const{
    return mYear;
}
unsigned int Date::getMonth() const{
    return mMonth;
}
unsigned int Date::getDay() const{
    return mDay;
}

//Setters
void Date::setYear(unsigned int y){
    mYear = y;
}
void Date::setMonth(unsigned int m){
    mMonth = m;
}
void Date::setDay(unsigned int d){
    mDay = d;
}

//Other functions
std::string Date::toText() const{
    std::string text = "";

    //Add mYear as 4 digits
    if(mYear < 10){
        text += "000";
    }
    else if(mYear < 100){
        text += "00";
    }
    else if(mYear < 1000){
        text += "0";
    }
    text += std::to_string(mYear) + "-";

    //Add mMonth as 2 digits
    if(mMonth < 10){
        text += "0";
    }
    text += std::to_string(mMonth) + "-";

    //Add mDay as 2 digits
    if(mDay < 10){
        text += "0";
    }
    text += std::to_string(mDay);

    return text;
}
