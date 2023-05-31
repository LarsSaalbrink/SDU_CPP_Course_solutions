#include "Gradebook.h"

#include <string>
#include <sstream>
#include <algorithm>

Gradebook::Gradebook() {}

void Gradebook::readResults(std::istream &ist)
{
    std::string input;
    std::getline(ist, input, '\n');
    if (!input.empty())
    {
        double grade_weight = std::stod(input);

        std::getline(ist, input, '\0');
        size_t pos = input.find("\n");
        while (pos != std::string::npos)
        {
            input.replace(pos, 1, " ");
            pos = input.find("\n");
        }
        input.erase(std::unique(input.begin(), input.end(), [](char a, char b)
                                { return isspace(a) && isspace(b); }),
                    input.end());
        if (input.back() == ' ')
        {
            input.pop_back();
        }
        std::stringstream cleanInput(input);

        while (cleanInput.peek() != -1)
        {
            std::string name;
            std::getline(cleanInput, name, ' ');

            std::string mPoint;
            std::getline(cleanInput, mPoint, ' ');

            try
            {
                mGrades.at(name).emplace_back(std::stoi(mPoint), grade_weight);
            }
            catch (const std::exception &e)
            {
                mGrades.emplace(name, std::vector<Grade>());
                mGrades.at(name).emplace_back(std::stoi(mPoint), grade_weight);
            }
        }
    }
}

void Gradebook::printResults(std::ostream &ost) const
{
    for (auto i = mGrades.begin(); i != mGrades.end(); ++i)
    {
        ost << i->first;

        for (Grade g : i->second)
        {
            ost << "   " << g.getPoint() << " (" << g.getWeight() << ")";
        }
        ost << "\n";
    }
}
