#include "TimeAndMaterials.h"

#include <iomanip>

TimeAndMaterials::TimeAndMaterials() : mAmount(0){}

TimeAndMaterials::TimeAndMaterials(double amount) : mAmount(amount){}

std::ostream& operator <<(std::ostream& output, const TimeAndMaterials& rhs)
{
    output << std::setw(8) 
           << std::right 
           << " "
           << std::setw(40)
           << std::left
           << rhs.getText()
           << std::setw(10) 
           << std::right 
           << rhs.getPrice()
           << std::setw(10) 
           << std::right 
           << rhs.totalPrice();

    return output;
}
