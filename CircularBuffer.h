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

private:
    std::vector<int> vec;
    unsigned size;
};