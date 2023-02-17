#ifndef DATE_H
#define DATE_H

class Date{
public:
    Date();
    Date(int year, int month, int day);

    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);

    int getDayOfWeek() const;

private:
    int _year, _month, _day;  //Should really be unsigned, but assignment insists
};

#endif // DATE_H
