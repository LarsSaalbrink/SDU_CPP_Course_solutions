#include "Shapes.h"
#include <cmath>
#include <stdexcept>

Shapes::Shapes()
{
}

double Shapes::area() const
{
    return mArea;
}

Circle::Circle(double radius)
{
    if(radius < 0)
    {
        throw std::invalid_argument("Radius must not be negative");
    }
    mRadius = radius;
    mArea = M_PI * mRadius * mRadius;
}

Rectangle::Rectangle(double width, double height)
{
    if(width < 0 || height < 0)
    {
        throw std::invalid_argument("Width and height must not be negative");
    }
    mWidth = width;
    mHeight = height;
    mArea = mWidth * mHeight;
}

Triangle::Triangle(double base, double height)
{
    if(base < 0 || height < 0)
    {
        throw std::invalid_argument("Base and height must not be negative");
    }
    mBase = base;
    mHeight = height;
    mArea = 0.5 * mBase * mHeight;
}
