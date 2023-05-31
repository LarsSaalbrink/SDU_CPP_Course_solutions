#ifndef PARAGRAPH_H
#define PARAGRAPH_H

#include <string>

class Paragraph
{
public:
    Paragraph(const std::string &str = "") : mStr(str) {}
    const std::string &getText() const { return mStr; }

private:
    std::string mStr;
};

#endif // PARAGRAPH_H
