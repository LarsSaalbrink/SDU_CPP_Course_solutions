#ifndef GRADE_H
#define GRADE_H

class Grade
{
public:
    Grade(int point = 0, float weight = 100) : mPoint(point), mWeight(weight) {}

    int getPoint() const { return mPoint; }
    float getWeight() const { return mWeight; }
    float weightedGrade() const { return mPoint * mWeight / 100; }

private:
    int mPoint;    // Point fra 0 til 100%
    float mWeight; // Vægt fra 0 til 100%
};

#endif // GRADE_H
