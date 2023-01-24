#ifndef SHAPES_H
#define SHAPES_H

#include <string>

class Shapes
{
public:
    // Default constructor
    Shapes();

    // Constructor with name
    Shapes(const std::string& name);
    
    // Name
    void setName(const std::string& name);
    const std::string& name() const;

    // Area
    virtual double area() const = 0;

protected:
   std::string _name;
};

class Circle: public Shapes
{
public:
    Circle(double radius);
    double area() const;

    double mRadius;
};

class Rectangle: public Shapes
{
public:
    Rectangle(double width, double height);
    double area() const;

    double mWidth;
    double mHeight;
};

class Triangle: public Shapes
{
public:
    Triangle(double base, double height);
    double area() const;

    double mBase;
    double mHeight;
};

#endif // SHAPES_H
