#pragma once
#include <vector>
#define private public

class CircularBuffer
{
public:
    CircularBuffer(unsigned s=0);
private:
    std::vector<int> vec;
    unsigned size;
};