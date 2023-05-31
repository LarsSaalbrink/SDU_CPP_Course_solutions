#ifndef DATETIME_H
#define DATETIME_H

#include <ostream>

class DateTime
{
public:
    DateTime() {}
    DateTime(int year, 
             unsigned int month, 
             unsigned int day,
             unsigned int hour,
             unsigned int minute, 
             unsigned int second);

    const bool operator <(const DateTime& rhs) const;
    const bool operator >(const DateTime& rhs) const;
    const bool operator ==(const DateTime& rhs) const;

    friend std::ostream& operator <<(std::ostream& output, const DateTime& rhs); 

private:
    int mYear = 1970;
    unsigned int mMonth = 1, mDay = 1;
    unsigned int mHour = 0, mMinute = 0, mSecond = 0;

    const unsigned int calcMonthDays(const unsigned int) const;
    const unsigned long int calcTotalSecs(const DateTime &input) const;
};

#endif // DATETIME_H
