#include "Bin.h"

#include <chrono>

Bin::Bin() : mRandomEngine(static_cast<unsigned int>(
                 std::chrono::high_resolution_clock::
                     now()
                         .time_since_epoch()
                         .count())) {}

void Bin::fillBin(int min, int max, int amount)
{
    mMax = max;
    mMin = min;

    mRange = max - min + 1;
    int amountForEachBin = amount / mRange;
    int remainder = amount % mRange;

    mValues.assign(mRange,amountForEachBin);

    for (unsigned int i = 0; i < mRange; ++i)
    {
        if (remainder)
        {
            ++mValues.at(i);
            --remainder;
        }
    }
}

int Bin::drawAndRemove(){
    int randVal = -1;
    if(size()){ 
        do{
            std::uniform_int_distribution<int> distribution(mMin,mMax);
            randVal = distribution(mRandomEngine);
        } while((mValues.at(randVal-mMin) == 0));

        --mValues.at(randVal-mMin);
    }
    return randVal;
}

unsigned int Bin::count(int value) const{
    return mValues.at(value-mMin);
}

unsigned int Bin::size() const{
    unsigned int total = 0;
    for(int i = 0; i < mRange; ++i){
        total += mValues.at(i);
    }
    return total;
}