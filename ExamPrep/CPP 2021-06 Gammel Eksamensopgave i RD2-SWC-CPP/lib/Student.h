#ifndef STUDENT_H
#define STUDENT_H

#include "Bin.h"

#include <string>
#include <vector>
#include <ostream>

class Student
{
public:
    Student();
    Student(const std::string &name, const std::string &username);

    std::string getName() const;
    void setName(const std::string &name);

    std::string getUsername() const;
    void setUsername(const std::string &name);

    void draw(Bin &bin);

    std::string getExam(const std::vector<std::string> &exams) const;

    friend std::ostream& operator <<(std::ostream& output, const Student& student); 

private:
    std::string mName;
    std::string mUsername;
    int mExam = -1;
};

#endif // STUDENT_H
