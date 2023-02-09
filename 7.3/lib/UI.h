#ifndef UI_H
#define UI_H

enum Options{
    option1,
    option2,
    badOption,
};

Options choice2(std::string message, const char choice1, const char choice2);

#endif // UI_H