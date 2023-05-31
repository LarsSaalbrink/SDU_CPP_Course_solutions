#include "TimeSheet.h"
#include "Material.h"

#include <iomanip>
#include <algorithm>

TimeSheet::TimeSheet()
{
}

TimeSheet::~TimeSheet()
{
    delete[] &mItems;
}

void TimeSheet::addTimeAndMaterial(TimeAndMaterials *tm)
{
    mItems.emplace_back(tm);
}

void TimeSheet::sortByType()
{
    std::sort(mItems.begin(), mItems.end());  //Sort by size of objects
}

std::ostream &operator<<(std::ostream &output, const TimeSheet &rhs)
{
    for (TimeAndMaterials *entry : rhs.mItems)
    {
        output << std::setw(8)
               << std::right
               << " "
               << (dynamic_cast<Material*>(entry) ? "M" : "W")
               << " "
               << std::setw(40)
               << std::left
               << entry->getText()
               << std::setw(10)
               << std::right
               << entry->getPrice()
               << std::setw(10)
               << std::right
               << entry->totalPrice()
               << "\n";
    }

    return output;
}
