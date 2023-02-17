#include "Date.h"
#include <iostream>

Date::Date(){
    _year = 0;
    _month = 0;
    _day = 0;
}

Date::Date(int year, int month, int day){
    _year = year;
    _month = month;
    _day = day;
}

void Date::setYear(int year){
    _year = year;
}

void Date::setMonth(int month){
    _month = month;
}

void Date::setDay(int day){
    _day = day;
}

int Date::getDayOfWeek() const{
    int y = _year;
    int m = _month;
    int d = _day;

    //Print inputs
    std::cout << "\nYear: " << y << "\n";
    std::cout << "Month: " << m << "\n";
    std::cout << "Day: " << d << "\n";

    //If month is jan or feb, shift year back by 1
    if(m < 3){
        --y;
    }
    
    //Shift months to make march = 1, feb = 12
    m = (m + 9) % 12 + 1;

    int weeknum = ((d + 
                   (static_cast<int>(2.6*m-0.2)) + 
                   (y % 100) + 
                   ((y % 100)/4) + 
                   ((y/100)/4) - 
                   (2*(y/100))
                   ) % 7);
    return (weeknum < 0 ? weeknum + 7 : weeknum);
}

