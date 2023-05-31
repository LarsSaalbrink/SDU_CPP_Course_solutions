#include "Student.h"

Student::Student(){
    mName = "No name provided";
    mUsername = "No username provided";
}

Student::Student(const std::string &name, const std::string &username) {
    mName = name;
    mUsername = username;
}

std::string Student::getName() const {
    return mName;
}

void Student::setName(const std::string &name) {
    mName = name;
}

std::string Student::getUsername() const {
    return mUsername;
}

void Student::setUsername(const std::string &name) {
    mUsername = name;
}

void Student::draw(Bin &bin) {
    mExam = bin.drawAndRemove();
}

std::string Student::getExam(const std::vector<std::string> &exams) const {
    if(mExam == -1){
        return "No exam assigned to this student";
    }
    return exams.at(mExam);
}

std::ostream& operator<<(std::ostream &output, const Student& student)
{
    output << "Student: " << student.mName << " with username \"" << student.mUsername << "\"";
    return output;
}
