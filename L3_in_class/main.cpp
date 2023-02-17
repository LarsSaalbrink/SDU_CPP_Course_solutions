#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>
#include <array>
#include <algorithm>
#include <string>

int main()
{
    /*
    const size_t cols = 5, rows = 3; 
    std::array<std::array<int, cols>, rows> array{{{1,2,3,4,5},
                                                   {2,3,4,5,6},
                                                   {3,4,5,6,7}}}; 

    for (auto const& row : array) { 
        for (auto elem : row) { 
            std::cout << elem << " "; 
        } 
        std::cout << std::endl; 
    }
    */

    /*
    std::array<std::string, 7> colors {"red", "orange", "yellow", 
                                       "green", "blue", "indigo", "violet"}; 

    std::cout << "Unsorted array: "; 
    for (const std::string& color : colors) { 
        std::cout << color << " "; 
    } 
    std::cout << std::endl; 

    std::sort(colors.begin(), colors.end()); 

    std::cout << "Sorted array : "; 
    for (const std::string& color : colors) { 
        std::cout << color << " "; 
    } 
    std::cout << std::endl;
    */

    
    std::vector<unsigned int> v(5); 
    for (size_t i = 0; i < 4; ++i) { 
        v[i] = i; 
    } 
    v.push_back(5);
    
    std::cout << v[4] << std::endl;



    return 0;
}
