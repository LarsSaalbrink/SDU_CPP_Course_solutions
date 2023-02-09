#ifndef ARRAYINT100_H
#define ARRAYINT100_H

class ArrayInt100{
public:
    ArrayInt100();
    
    void fillRandom(const int min, const int max);
    int findMax() const;
    void print() const;
    unsigned int countSpecific(const int value) const;
    void swapAll();

private:
    int _array[100];
};

#endif // ARRAYINT100_H
