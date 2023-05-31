#ifndef RECIPE_H
#define RECIPE_H

#include "Paragraph.h"

#include <string>
#include <vector>

class Recipe 
{ 
public: 
    Recipe(const std::string& title = "No title assigned"); 

    const std::vector<Paragraph>& getParagraphs() const;

    void setTitle(const std::string& title);
    const std::string& getTitle() const;

    friend std::istream &operator>>(std::istream &input, Recipe &rhs);
 
private: 
    std::string mTitle; 
    std::vector<Paragraph> mParagraphs; 
};

#endif // RECIPE_H
