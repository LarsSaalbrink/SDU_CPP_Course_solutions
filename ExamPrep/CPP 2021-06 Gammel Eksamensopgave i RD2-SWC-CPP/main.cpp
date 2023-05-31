#include "Bin.h"
#include "Student.h"
#include "Gradebook.h"

#include <iostream>
#include <iomanip>
#include <sstream>

#define runTests 1

int main()
{
#if runTests
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Opgave 1a test --" << std::endl;
    std::cout << "--------------------" << std::endl
              << std::endl;

    // Test lodtrækning uden tilbagelægning
    Bin b;
    b.fillBin(1, 2, 10);
    std::cout << "Bin size (before): " << b.size() << std::endl;
    std::cout << "Number of 1's: " << b.count(1) << std::endl;
    std::cout << "Number of 2's: " << b.count(2) << std::endl;
    std::cout << "Draw : ";
    for (unsigned int i = 0; i < 10; ++i)
    {
        std::cout << b.drawAndRemove() << " ";
    }
    std::cout << std::endl;
    std::cout << "Bin size (after): " << b.size() << std::endl;
    std::cout << std::endl;

    b.fillBin(2, 4, 10);
    std::cout << "Bin size (before): " << b.size() << std::endl;
    std::cout << "Number of 2's: " << b.count(2) << std::endl;
    std::cout << "Number of 3's: " << b.count(3) << std::endl;
    std::cout << "Number of 4's: " << b.count(4) << std::endl;
    std::cout << "Draw : ";
    for (unsigned int i = 0; i < 10; ++i)
    {
        std::cout << b.drawAndRemove() << " ";
    }
    std::cout << std::endl;
    std::cout << "Bin size (after): " << b.size() << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Opgave 1b test --" << std::endl;
    std::cout << "--------------------" << std::endl
              << std::endl;

    // Test lodtrækning af faglighed ved en eksamen
    std::vector<std::string> exams1{"PLC", "OOP"};
    std::vector<std::string> exams2{"IIC", "RSI", "VIS"};
    std::vector<Student> students;
    students.emplace_back("Hans Hansen", "hahan20");
    students.emplace_back("Hanne Hansen", "haha120");
    students.emplace_back("Jens Jensen", "jejen20");
    students.emplace_back("Jesper Jespersen", "jejes20");
    students.emplace_back("Henrik Henriksen", "hehen20");
    students.emplace_back("S\x9Bren S\x9Brensen", "sosor20");
    students.emplace_back("Niels Nielsen", "ninie20");
    students.emplace_back("Peder Pedersen", "peped20");
    students.emplace_back("Anders Andersen", "anand20");
    students.emplace_back("Christian Christensen", "chchr20");
    students.emplace_back("Lars Larsen", "lalar20");
    students.emplace_back("Rasmus Rasmussen", "raras20");
    students.emplace_back("J\x9Brgen J\x9Brgensen", "jojor20");

    std::cout << "Studerende og brugernavne" << std::endl;
    for (Student &s : students)
    {
        std::cout << std::left << std::setw(22) << s.getName() << " " << s.getUsername() << std::endl;
    }
    std::cout << std::endl;

    // Lodtrækning uden tilbagelægning
    Bin bCourse;
    bCourse.fillBin(0, exams1.size() - 1, students.size());
    // Lav trækning for hver studerende
    for (Student &s : students)
    {
        s.draw(bCourse);
    }
    // Udskriv resultat af lodtrækning for hver studerende
    std::cout << "Studerende og brugernavne med lodtr\x91kning" << std::endl;
    for (Student &s : students)
    {
        std::string examDraw = s.getExam(exams1);
        std::cout << std::left << std::setw(22) << s.getName() << " "
                  << std::setw(10) << s.getUsername() << " " << examDraw << std::endl;
    }

    std::cout << std::endl
              << "Anden lodtr\x91kning" << std::endl;
    // Anden lodtrækning
    bCourse.fillBin(0, exams2.size() - 1, students.size());
    for (Student &s : students)
    {
        s.draw(bCourse);
    }
    for (Student &s : students)
    {
        std::string examDraw = s.getExam(exams2);
        std::cout << std::left << std::setw(22) << s.getName() << " "
                  << std::setw(10) << s.getUsername() << " " << examDraw << std::endl;
    }

    std::cout << std::endl
              << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Opgave 1c test --" << std::endl;
    std::cout << "--------------------" << std::endl
              << std::endl;

    for (Student &s : students)
    {
        std::string examDraw = s.getExam(exams2);
        std::cout << s << " " << examDraw << std::endl;
    }

    std::cout << std::endl
              << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Opgave 2  test --" << std::endl;
    std::cout << "--------------------" << std::endl
              << std::endl;

    Gradebook gBook;

    std::string activityCPP1 = "2.5\n";
    std::string activityCPP2 = "2.5\n";
    std::string activityOOP1 = "5\n";
    std::string examCPP = "45\n";
    std::string examOOP = "45\n";
    activityCPP1 += "prhol02 100\njejen20 80\nninie20  20\njajol20 50\n\n";
    activityCPP2 += "prhol02 100\njejen20 80\nninie20  50\njajol20 35\njejoe20 10\n";
    activityOOP1 += "prhol02 100\njejen20 80\n\n\njajol20 17\njejoe20 50\n";
    examCPP += "prhol02 100\njejen20 100\nninie20  90\njajol20 80\njejoe20 70\n ";
    examOOP += "prhol02 100\njejen20 100\nninie20  80\njajol20 30\njejoe20 45\n ";

    std::stringstream saCPP1(activityCPP1);
    std::stringstream saCPP2(activityCPP2);
    std::stringstream saOOP1(activityOOP1);
    std::stringstream seCPP(examCPP);
    std::stringstream seOOP(examOOP);
    gBook.readResults(saCPP1);
    gBook.readResults(saCPP2);
    gBook.readResults(saOOP1);
    gBook.readResults(seCPP);
    gBook.readResults(seOOP);

    std::stringstream ssoutput;
    gBook.printResults(ssoutput);
    std::cout << "Resultat er printet i stream" << std::endl;
    std::cout << ssoutput.str() << std::endl;
    std::cout << "Resultat er printet på skærm" << std::endl;
#endif

    return 0;
}
