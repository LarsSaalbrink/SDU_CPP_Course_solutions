#ifndef Date_H
#define Date_H

#include <string>

class Date
{
public:
    Date();
    Date(unsigned int d, unsigned int m, unsigned int y);
    ~Date();

    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;

    void setYear(unsigned int y);
    void setMonth(unsigned int m);
    void setDay(unsigned int d);

    std::string toText() const;

private:
    unsigned int mYear, mMonth, mDay;
};

#endif // Date_H