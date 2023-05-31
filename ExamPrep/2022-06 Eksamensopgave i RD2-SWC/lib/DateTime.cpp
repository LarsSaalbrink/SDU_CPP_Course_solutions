#include "DateTime.h"

#define CALC_TOTAL_SECS(obj, x) obj x mSecond +                                                 \
                                    obj x mMinute * 60 +                                        \
                                    obj x mHour * 60 * 60 +                                     \
                                    obj x mDay * 60 * 60 * 24 +                                 \
                                    obj x mMonth * 60 * 60 * 24 * calcMonthDays(obj x mMonth) + \
                                    obj x mYear * 60 * 60 * 24 * calcMonthDays(obj x mMonth) * 12

DateTime::DateTime(int year,
                   unsigned int month,
                   unsigned int day,
                   unsigned int hour,
                   unsigned int minute,
                   unsigned int second) : mYear(year),
                                          mMonth(month),
                                          mDay(day),
                                          mHour(hour),
                                          mMinute(minute),
                                          mSecond(second) {}

const bool DateTime::operator<(const DateTime &rhs) const
{
    return (calcTotalSecs(*this) < calcTotalSecs(rhs));
}
const bool DateTime::operator>(const DateTime &rhs) const
{
    return (calcTotalSecs(*this) > calcTotalSecs(rhs));
}
const bool DateTime::operator==(const DateTime &rhs) const
{
    return (calcTotalSecs(*this) == calcTotalSecs(rhs));
}

const unsigned long int DateTime::calcTotalSecs(const DateTime &input) const
{
    return ((input.mMinute * 60) +
            (input.mHour * 60 * 60) +
            (input.mDay * 60 * 60 * 24) +
            (input.mMonth * 60 * 60 * 24 * calcMonthDays(input.mMonth)) +
            (input.mYear * 60 * 60 * 24 * 365));
}

const unsigned int DateTime::calcMonthDays(const unsigned int input) const
{
    switch (input)
    {
    case 2:
        return 28;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    default:
        return 30;
    }
}

std::ostream &operator<<(std::ostream &output, const DateTime &rhs)
{
    output << std::to_string(rhs.mYear)
           << "-"
           << std::to_string(rhs.mMonth)
           << "-"
           << std::to_string(rhs.mDay)
           << "   "
           << std::to_string(rhs.mHour)
           << ":"
           << std::to_string(rhs.mMinute)
           << ":"
           << std::to_string(rhs.mSecond);
    return output;
}
