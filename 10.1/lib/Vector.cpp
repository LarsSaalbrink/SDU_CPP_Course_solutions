#include "Vector.h"

Vector::Vector(int n){
    mSize = n;
    mElems = new double[n];
}

Vector::Vector(const Vector& v){  //Copy constructor
    mSize = v.mSize;
    mElems = new double[mSize];
    for (int i = 0; i < mSize; i++){
        mElems[i] = v.mElems[i];
    }
}

Vector::~Vector(){
    if(mElems != nullptr){
        delete[] mElems;
        mSize = 0;
    }
}

//Create a deep copy of rhs (not a shallow copy)
Vector& Vector::operator=(const Vector& rhs){
    if (this != &rhs)  //Check for self-assignment
    {
        if(mElems != nullptr){
            delete[] mElems;
        }
        mSize = rhs.mSize;
        mElems = new double[mSize];
        for (int i = 0; i < mSize; i++){
            mElems[i] = rhs.mElems[i];
        }
    }
    return *this;
}

bool Vector::operator==(const Vector& rhs){
    if (mSize != rhs.mSize){
        return false;
    }
    for (int i = 0; i < mSize; i++){
        if (mElems[i] != rhs.mElems[i]){
            return false;
        }
    }
    return true;
}

//Compare contents of two vectors using the == operator overload
bool Vector::operator!=(const Vector& rhs){
    return !(*this == rhs);
}

Vector Vector::operator+(const Vector& rhs){
    Vector result(mSize);
    for (int i = 0; i < mSize; i++){
        result.mElems[i] = mElems[i] + rhs.mElems[i];
    }
    return result;
}

Vector Vector::operator-(const Vector& rhs){
    Vector result(mSize);
    for (int i = 0; i < mSize; i++){
        result.mElems[i] = mElems[i] - rhs.mElems[i];
    }
    return result;
}

Vector& Vector::operator+=(const Vector& rhs){
    for (int i = 0; i < mSize; i++){
        mElems[i] += rhs.mElems[i];
    }
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs){
    for (int i = 0; i < mSize; i++){
        mElems[i] -= rhs.mElems[i];
    }
    return *this;
}

double& Vector::operator[](int i){
    if(i < 0 || i >= mSize){
        throw std::out_of_range("Vector index out of range");
    }
    return mElems[i];
}

const double& Vector::operator[](int i) const{
    if(i < 0 || i >= mSize){
        throw std::out_of_range("Vector index out of range");
    }
    return mElems[i];
}

//Supposed to function as a mathematical vector, so limited acceptable inputs
std::istream& operator>>(std::istream& input, Vector& a){
    //Keep reading until istream is exhausted or mSize elements read
    for (int i = 0; ((i < a.mSize) && (!input.eof())); i++){
        //Determine if character is a positive number
        if((input.peek() >= 48) && (input.peek() <= 57)){
            a.mElems[i] = (input.get()-48);      //-48 to remove ASCII offset
        }
        else if(input.peek() == 45){             //If character is negative number
            input.get();                         //Remove the negative sign from buffer
            if((input.peek() >= 48) && (input.peek() <= 57)){
                a.mElems[i] = (input.get()-48);  //-48 to remove ASCII offset
                a.mElems[i] *= -1;               //Make number negative
            }
            else{
                throw std::invalid_argument("Invalid input");
            }
        }
        else{
            throw std::invalid_argument("Invalid input");
        }
    }
    return input;
}

std::ostream& operator<<(std::ostream& output, const Vector& a){
    for (int i = 0; i < a.mSize; i++){
        output << a.mElems[i];
    }
    return output;
}

double dot(const Vector& l, const Vector& r){ //Dot product
    double result = 0;
    for (int i = 0; i < l.mSize; i++){
        result += l.mElems[i] * r.mElems[i];
    }
    return result;
}
