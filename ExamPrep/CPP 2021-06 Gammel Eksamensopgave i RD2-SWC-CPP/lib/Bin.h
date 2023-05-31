#ifndef BIN_H
#define BIN_H

#include <random>
#include <vector>

class Bin 
{ 
public: 
    Bin(); 
 
    void fillBin(int min, int max, int amount); 
 
    int drawAndRemove(); 
 
    unsigned int count(int value) const; 
 
    unsigned int size() const; 
 
private: 
    std::default_random_engine mRandomEngine; 
    std::vector<int> mValues; 

    int mMin, mMax, mRange;
};

#endif // BIN_H
