#include "Vector.h"
#include <iostream>
#include <sstream>

//-----Unit tests for Vector class-----
bool regularConstructorTest()
{
    Vector a(3);

    try{  //Check if expected elements are present
        a[0] = 0;
        a[1] = 1;
        a[2] = 2;
    }
    catch (std::out_of_range& err){
        std::cout << "\nregularConstructorTest() failed, not enough elements\n";
        return true;
    }

    try{  //Check if too many elements are present 
        a[3] = 3;
    }
    catch (std::out_of_range& err){
        return false;
    }
    std::cout << "\nregularConstructorTest() failed, found elements past range\n";

    return true;
}

bool copyConstructorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    Vector b(a);  //Copy constructor

    if (a == b){  //Use == operator overload
        return false;
    }
    std::cout << "\ncopyConstructorTest() failed, copy operation result unsatisfactory\n";
    return true;
}

//Adhering to C++11 removes the option of throwing exception from destructor,
//so test is considered passed if no crash occurs
bool deconstructorTest() 
{
    {
        Vector a(3);
        a[0] = 0;
        a[1] = 1;
        a[2] = 2;
    }
    return false;
}

bool copyAssignmentOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    Vector b(3);
    b[0] = 3;
    b[1] = 4;
    b[2] = 5;

    b = a;  //Copy assignment operator

    if (a == b){  //Use == operator overload
        return false;
    }
    std::cout << 
    "\ncopyAssignmentOperatorTest() failed, copy operation result unsatisfactory\n";
    return true;
}

bool equalityOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = -2;

    Vector b(3);
    b[0] = 0;
    b[1] = 1;
    b[2] = -2;

    if (a == b){
        return false;
    }
    std::cout << "\nequalityOperatorTest() failed, equality operation result incorrect\n";
    return true;
}

bool inequalityOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = -2;

    Vector b(3);
    b[0] = 0;
    b[1] = 1;
    b[2] = -2;

    if (a != b){
        return true;
        std::cout << "\ninequalityOperatorTest() failed, inequality operation result incorrect\n";
    }
    return false;
}

bool additionOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    Vector b(3);
    b[0] = 0;
    b[1] = 1;
    b[2] = -2;

    Vector c = a + b;

    Vector d(3);
    d[0] = 0;
    d[1] = 2;
    d[2] = 0;

    if (c == d){
        return false;
    }
    std::cout << "\nadditionOperatorTest() failed, addition operation result incorrect\n";
    return true;
}

bool subtractionOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    Vector b(3);
    b[0] = 0;
    b[1] = 1;
    b[2] = -2;

    Vector c = a - b;

    Vector d(3);
    d[0] = 0;
    d[1] = 0;
    d[2] = 4;

    if (c == d){
        return false;
    }
    std::cout << "\nsubtractionOperatorTest() failed, subtraction operation result incorrect\n";
    return true;
}

bool additionAssignmentOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    Vector b(3);
    b[0] = 0;
    b[1] = 1;
    b[2] = -2;

    a += b;

    Vector c(3);
    c[0] = 0;
    c[1] = 2;
    c[2] = 0;

    if (a == c){
        return false;
    }
    std::cout << "\nadditionAssignmentOperatorTest() failed, operation result incorrect\n";
    return true;
}

bool subtractionAssignmentOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    Vector b(3);
    b[0] = 0;
    b[1] = 1;
    b[2] = -2;

    a -= b;

    Vector c(3);
    c[0] = 0;
    c[1] = 0;
    c[2] = 4;

    if (a == c){
        return false;
    }
    std::cout << "\nsubtractionAssignmentOperatorTest() failed, operation result incorrect\n";
    return true;
}

bool indexOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    try{
        a[3] = 3;
    }
    catch (std::out_of_range& err){
        try{
            double b = a[2];
        }
        catch (std::out_of_range& err){
            std::cout << 
            "\nindexOperatorTest() failed, index operator threw exception on valid access\n";
            return true;
        }
        return false;
    }
    std::cout << "\nindexOperatorTest() failed, index operator allowed out of range access\n";
    return true;
}

bool constIndexOperatorTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    try{
        const Vector b(a);
        const double c = b[3];
    }
    catch (std::out_of_range& err){
        try{
            const Vector d(a);
            const double e = d[2];
        }
        catch (std::out_of_range& err){
            std::cout << 
            "\nconstIndexOperatorTest() failed, index operator threw exception on valid access\n";
            return true;
        }
        return false;
    }
    std::cout << "\nconstIndexOperatorTest() failed, index operator allowed out of range access\n";
    return true;
}

bool streamOperatorsTest()
{
    //Check if Vector can be inserted into a stream and extracted from a stream
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = -2;

    std::stringstream ss;
    ss << a;

    Vector b(3);
    ss >> b;

    if (a == b){  
        //Check if trying to insert non-numbers into a stream throws an exception
        try{
            std::stringstream ss2;
            ss2 << "a!\n";

            Vector c(3);
            ss2 >> c;
        }
        catch (std::invalid_argument& err){
            return false;
        }
        std::cout << "\nstreamOperatorTest() failed, stream operator ";
        std::cout << "did not throw exception on invalid input\n";
        return true;
    }
    std::cout << "\nstreamOperatorTest() failed, stream operator result incorrect\n";
    return true;
}

bool dotProductTest()
{
    Vector a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    Vector b(3);
    b[0] = 0;
    b[1] = 1;
    b[2] = -2;

    double c = dot(a, b);

    if (c == -3){
        return false;
    }
    std::cout << "\ndotProductTest() failed, dot product result incorrect\n";
    return true;
}