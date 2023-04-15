#ifndef SHAPES_H
#define SHAPES_H

#include <cmath>
#include <stdexcept>

#define DADDY : public Shapes
#define THROW_ERR throw std::invalid_argument("Negative input not supported")
#define C_N(x) if(*(double*)x < 0) THROW_ERR
#define D void*
#define DEF(N, n1, o1, n2, o2, c1) \
           private: D n1;D n2; public: N(D n1,D n2):n1(n1),n2(n2) \
           {C_N(n1);C_N(n2);mArea=((*(double*)n1) o1 (*(double*)n2) o2 c1);}

struct Shapes{
    protected:
        double mArea;
    public:
        Shapes() : mArea(0.0) {}
        const double area() const { return mArea; }
};
struct Circle    DADDY{DEF(Circle, r1, *, r2, *, M_PI)};
struct Rectangle DADDY{DEF(Rectangle, w, *, h, +, 0.0)};
struct Triangle  DADDY{DEF(Triangle, b, *, h, /, 2.0)};

#endif // SHAPES_H
