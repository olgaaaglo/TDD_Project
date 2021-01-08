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
    int getElement(unsigned index) const;
    int remove();

private:
    std::vector<int> vec;
    unsigned size;
    unsigned buffIter;
};