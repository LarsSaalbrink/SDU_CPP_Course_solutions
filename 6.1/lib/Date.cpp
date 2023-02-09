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

int Date::getDayOfWeek(){
    int y = _year;
    int m = _month;
    int d = _day - 1;  //Math expects 0 indexed day

    //Print inputs
    std::cout << "Year: " << y << "\n";
    std::cout << "Month: " << m << "\n";
    std::cout << "Day: " << d << "\n";
    
    //Shift months to make march = 1, feb = 12
    m = (m + 9) % 12 + 1;

    int weeknum = (static_cast<int>(d + 
                                    (static_cast<int>(2.6*m-0.2)) + 
                                    (y % 100) + 
                                    ((y % 100)/4) + 
                                    ((y/100)/4) - 
                                    2*(y/100)) % 7);
    return (weeknum < 0 ? weeknum + 7 : weeknum);
}

