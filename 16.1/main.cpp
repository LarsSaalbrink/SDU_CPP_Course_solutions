#include <iostream>
#include <iterator>
#include "Merge.h"
#include <vector>

int main()
{
    std::ostream_iterator <double> outputD{std::cout , " "};
    std::vector <double> a{1,2,4,5,1,3,4,7};
    std::cout << "Before merge: ";
    std::copy(a.begin(), a.end(), outputD);
    std::cout << std::endl;

    //1,2,4,5,(end)   +   1,3,4,7,(end)   =    1,1,2,3,4,4,5,7
    mergeArray(a.begin(), a.begin() + 4, a.end());

    std::cout << "After merge: ";
    std::copy(a.begin(), a.end(), outputD);
    std::cout << std::endl;


    std::vector<double> b{7,4,3,1,5,4,2,1};
    std::cout << "Before merge: ";
    std::copy(b.begin(), b.end(), outputD);
    std::cout << std::endl;

    //7,4,3,1,(end)   +   5,4,2,1,(end)   =   7,5,4,4,3,2,1,1
    std::greater<double> g;
    mergeArray(b.begin(), b.begin() + 4, b.end(), g);

    std::cout << "After merge: ";
    std::copy(b.begin(), b.end(), outputD);
    std::cout << std::endl;

    return 0;
}
