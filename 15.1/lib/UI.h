#ifndef UI_H
#define UI_H

enum Options{
    option1,
    option2,
    option3,
    badOption,
};

Options choice2(const std::string& message, char choice1, char choice2);
Options choice3(const std::string& message, char choice1, char choice2, char choice3);

void programDone();

#endif // UI_H