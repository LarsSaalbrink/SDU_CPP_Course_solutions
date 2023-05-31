#include "Table.h"
#include <iomanip>
#include <string>
#include <sstream>

void Table::setHeaders(const std::string &h1, const std::string &h2, const std::string &h3)
{
    mHeaders = std::make_tuple(h1, h2, h3);
}

void Table::addData(const int i, const std::string &s, const double d)
{
    mData.push_back(std::make_tuple(i, s, d));
}

void Table::outputData(std::ostream &os)
{
    os << "\n"
       << std::get<0>(this->mHeaders)
       << " "
       << std::get<1>(this->mHeaders)
       << std::setw(27) << std::right
       << std::get<2>(this->mHeaders)
       << "\n------------------------------------\n";

    for (std::tuple elem : this->mData)
    {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(2) << std::get<2>(elem);
        std::string fixed_deci_string = stream.str();

        os << std::setw(3)
           << std::get<0>(elem)
           << " "
           << std::get<1>(elem)
           << std::setw(32-std::get<1>(elem).size()) << std::right
           << fixed_deci_string
           << "\n";
    }
}
