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

    Circle circle(10.0);
    Rectangle rectangle(10.0, 20.0);
    Triangle triangle(10.0, 20.0);

    std::cout << "Circle with radius " << radius << ": " << circle.area() << std::endl;
    std::cout << "Rectangle with width " << width << " and height " << height << ": " << rectangle.area() << std::endl;
    std::cout << "Triangle with base " << base << " and height " << height << ": " << triangle.area() << std::endl;

    return 0;
}
