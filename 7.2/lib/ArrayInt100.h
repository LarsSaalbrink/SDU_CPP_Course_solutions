#ifndef DATE_H
#define DATE_H

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

#endif // DATE_H
