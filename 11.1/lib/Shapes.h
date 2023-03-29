#ifndef SHAPES_H
#define SHAPES_H

class Shapes{
public:
    Shapes();
    
    const double area() const;

protected:
    double mArea;
};

class Circle : public Shapes{
public:
    Circle(double radius);
private:
    double mRadius;
};

class Rectangle : public Shapes{
public:
    Rectangle(double width, double height);
private:
    double mWidth;
    double mHeight;
};

class Triangle : public Shapes{
public:
    Triangle(double base, double height);
private:
    double mBase;
    double mHeight;
};

#endif // SHAPES_H
