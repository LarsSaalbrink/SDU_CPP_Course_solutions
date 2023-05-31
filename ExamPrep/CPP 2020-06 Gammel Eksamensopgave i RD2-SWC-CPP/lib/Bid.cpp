#include "Bid.h"

bool Bid::operator<(const Bid& rhs){
    return this->mPriority < rhs.mPriority;
}
