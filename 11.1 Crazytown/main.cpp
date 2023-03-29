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

    Circle circle(radius,radius);
    Rectangle rectangle(width, height);
    Triangle triangle(base, height);

    std::cout << "Area of circle with radius " << radius << ": " << circle.area() << std::endl;
    std::cout << "Area of rectangle with width " << width << " and height " << height << ": " << rectangle.area() << std::endl;
    std::cout << "Area of triangle with base " << base << " and height " << height << ": " << triangle.area() << std::endl;

    return 0;
}
