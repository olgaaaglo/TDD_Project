#pragma once
#include <vector>
#define private public

class CircularBuffer
{
public:
    CircularBuffer(unsigned s=0);
    unsigned getAllocatedSize() const;
private:
    std::vector<int> vec;
    unsigned size;
};