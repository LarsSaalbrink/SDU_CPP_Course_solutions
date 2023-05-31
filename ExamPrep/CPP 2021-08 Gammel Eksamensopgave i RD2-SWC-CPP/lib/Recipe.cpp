#include "Recipe.h"

#include <iostream>
#include <string>
#include <sstream>

Recipe::Recipe(const std::string &title)
{
    mTitle = title;
}

const std::vector<Paragraph> &Recipe::getParagraphs() const
{
    return mParagraphs;
}

void Recipe::setTitle(const std::string &title)
{
    mTitle = title;
}

const std::string &Recipe::getTitle() const
{
    return mTitle;
}

std::istream &operator>>(std::istream &input, Recipe &rhs)
{
    std::string fullStr;
    std::getline(input, fullStr, '\0');

    size_t pos = fullStr.find("\n\n\n");
    std::string paraText;
    while (pos != std::string::npos)
    {
        paraText = fullStr.substr(0,pos);
        rhs.mParagraphs.emplace_back(Paragraph(paraText));
        
        fullStr = fullStr.substr(pos+3,fullStr.size());  //skip the \n\n\n
        pos = fullStr.find("\n\n\n");
    }

    //Read in the last line
    paraText = fullStr.substr(0,fullStr.size());
    rhs.mParagraphs.emplace_back(Paragraph(paraText));

    return input;
}
