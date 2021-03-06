#pragma once
#include <vector>
#define private public

class CircularBuffer
{
public:
    CircularBuffer(unsigned s=0);

    unsigned getAllocatedSize() const;
    unsigned getSize() const;

    void add(int i);
    int remove();

    int getElement(unsigned index) const;

private:
    std::vector<int> vec;
    unsigned size;
    unsigned buffIter;
};

class empty_buffor_exception : public std::exception
{

};