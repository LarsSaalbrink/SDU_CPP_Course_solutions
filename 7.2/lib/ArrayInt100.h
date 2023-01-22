#ifndef ARRAYINT100_H
#define ARRAYINT100_H

class ArrayInt100
{
public:
    ArrayInt100();
    
    void fillRandom(int min, int max);
    int findMax();
    void print();
    unsigned int countSpecific(int value);
    void swapAll();

private:
    int _array[100];
};

#endif // ARRAYINT100_H
