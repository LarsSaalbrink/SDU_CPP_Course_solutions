#include "ArrayInt100.h"
#include <cstdlib>
#include <iostream>


ArrayInt100::ArrayInt100()
{
    for (int i = 0; i < 100; i++)
    {
        _array[i] = 0;
    }
}

void ArrayInt100::fillRandom(int min, int max)
{
    for (int i = 0; i < 100; i++)
    {
        _array[i] = (rand() % ((max - min + 1) + min));
    }
}

int ArrayInt100::findMax()
{
    int max = _array[0];
    for (int i = 0; i < 100; i++)
    {
        if (_array[i] > max)
        {
            max = _array[i];
        }
    }
    return max;
}

void ArrayInt100::print()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << _array[i] << ", ";
    }
    std::cout << std::endl;
}

unsigned int ArrayInt100::countSpecific(int value)
{
    unsigned int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if (_array[i] == value)
        {
            count++;
        }
    }
    return count;
}

void ArrayInt100::swapAll()
{
    for (int i = 0; i < 50; i++)
    {
        int temp = _array[i];
        _array[i] = _array[99 - i];
        _array[99 - i] = temp;
    }
}

