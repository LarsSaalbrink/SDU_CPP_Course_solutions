#include "Date.h"

Date::Date()
{
    _year = 0;
    _month = 0;
    _day = 0;
}

Date::Date(int year, int month, int day)
{
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
    
    //Shift months to make march = 1, feb = 12
    m = (m + 10) % 12;

    return ((int)(d + ((int)(2.6*m-0.2)) + (y % 100) + ((y % 100)/4) + ((y/100)/4) - 2*(y/100)) % 7);
}

