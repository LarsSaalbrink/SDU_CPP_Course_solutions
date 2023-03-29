#include "Shapes.h"
#include <cmath>
#include <stdexcept>

Shapes::Shapes(){}

Shapes::Shapes(const std::string& name){
    _name = name;
}

void Shapes::setName(const std::string& name){
    _name = name;
}

const std::string& Shapes::name() const{
    return _name;
}


Circle::Circle(double radius) : Shapes("circle"){
    if(radius < 0){
        throw std::invalid_argument("Radius must not be negative");
    }
    mRadius = radius;
}

const double Circle::area() const{
    return (M_PI * mRadius * mRadius);
}


Rectangle::Rectangle(double width, double height) : Shapes("rectangle"){
    if(width < 0 || height < 0){
        throw std::invalid_argument("Width and height must not be negative");
    }
    mWidth = width;
    mHeight = height;
}

const double Rectangle::area() const{
    return (mWidth * mHeight);
}


Triangle::Triangle(double base, double height) : Shapes("triangle"){
    if(base < 0 || height < 0){
        throw std::invalid_argument("Base and height must not be negative");
    }
    mBase = base;
    mHeight = height;
}

const double Triangle::area() const{
    return (0.5 * mBase * mHeight);
}
