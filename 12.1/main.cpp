#include <iostream>
#include "Shapes.h"

int main()
{
    //Set decimal precision to 2
    std::cout << std::fixed << std::cout.precision(2) << "\b";

    double radius = 10.0;
    double width = 10.0;
    double height = 20.0;
    double base = 10.0;

    Circle circle(radius);
    Rectangle rectangle(width, height);
    Triangle triangle(base, height);

    std::cout << "Area of " << circle.name() << " with radius " << circle.mRadius << ": " << circle.area() << std::endl;
    std::cout << "Area of " << rectangle.name() <<  " with width " << rectangle.mWidth << " and height " << rectangle.mHeight << ": " << rectangle.area() << std::endl;
    std::cout << "Area of " << triangle.name() << " with base " << triangle.mBase << " and height " << triangle.mHeight << ": " << triangle.area() << std::endl;

    return 0;
}
