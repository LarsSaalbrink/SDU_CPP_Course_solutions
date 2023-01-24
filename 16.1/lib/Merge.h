#ifndef MERGE_H
#define MERGE_H

#include <algorithm>
#include <vector>
#include <iterator>

//Std merge, but placing the result at the address of the first vector
template<class ForwardIt1>
void mergeArray(ForwardIt1 first, ForwardIt1 mid, ForwardIt1 last)
{
    typedef typename std::iterator_traits<ForwardIt1>::value_type T;
    std::vector<T> temp(std::distance(first, last));

    std::merge(first, mid, mid, last, temp.begin());
    std::copy(temp.begin(), temp.end(), first);
}

//Std merge, but placing the result at the address of the first vector and using a custom comparator
template<class ForwardIt1, class BinaryPredicate>
void mergeArray(ForwardIt1 first, ForwardIt1 mid, ForwardIt1 last, BinaryPredicate p)
{
    typedef typename std::iterator_traits<ForwardIt1>::value_type T;
    std::vector<T> temp(std::distance(first, last));

    std::merge(first, mid, mid, last, temp.begin(), p);
    std::copy(temp.begin(), temp.end(), first);
}

#endif // MERGE_H
