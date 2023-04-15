#include <iostream>
#include "Vector.h"
#include "UnitTest.h"

int main()
{
    bool test = false;
    //Runnning all unit tests
    std::cout << "Running unit tests: ";          //Dot for each test  //Wait for print to finish before running next test
    test |= regularConstructorTest();             std::cout << " .";   std::cout.flush();
    test |= copyConstructorTest();                std::cout << " .";   std::cout.flush();
    test |= deconstructorTest();                  std::cout << " .";   std::cout.flush();
    test |= copyAssignmentOperatorTest();         std::cout << " .";   std::cout.flush();
    test |= equalityOperatorTest();               std::cout << " .";   std::cout.flush();
    test |= inequalityOperatorTest();             std::cout << " .";   std::cout.flush();
    test |= additionOperatorTest();               std::cout << " .";   std::cout.flush();
    test |= subtractionOperatorTest();            std::cout << " .";   std::cout.flush();
    test |= additionAssignmentOperatorTest();     std::cout << " .";   std::cout.flush();
    test |= subtractionAssignmentOperatorTest();  std::cout << " .";   std::cout.flush();
    test |= indexOperatorTest();                  std::cout << " .";   std::cout.flush();
    test |= constIndexOperatorTest();             std::cout << " .";   std::cout.flush();
    test |= streamOperatorsTest();                std::cout << " .";   std::cout.flush();
    test |= dotProductTest();                     std::cout << " .";   std::cout.flush();

    if (test){
        std::cout << "\nOne or more unit tests failed\n";
    }
    else{
        std::cout << "\nAll unit tests passed\n";
    }
    
    std::cout << "\n\nIf no copy constructor & copy assignment operator are defined,\n";
    std::cout << "the \"=\" produces a shallow copy, and the destructor will thus deallocate\n";
    std::cout << "the same memory location twice when both a & b go out of scope.\n";
    std::cout << "This then causes a crash.\n" << std::endl;

    // Vector a(3);
    // {
    //     Vector b(2);
    //     b[0] = 1;
    //     b[1] = 2;
    //     Vector a;
    //     a = b;
    // }
    // Vector c(3);
    // c[0] = 0;
    // c[1] = 0;
    // c[2] = 0;
    // std::cout << a << std::endl;
    // std::cout << "Finish" << std::endl;

    return test;
}
