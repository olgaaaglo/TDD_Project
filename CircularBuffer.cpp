#include "CircularBuffer.h"
#include <iostream>

CircularBuffer::CircularBuffer(unsigned s)
{
    vec.resize(s);
    buffIter = 0;
    size = 0;
}
unsigned CircularBuffer::getAllocatedSize() const
{
    return vec.size();
}

unsigned CircularBuffer::getSize() const
{
    return size;
}

void CircularBuffer::add(int i)
{
    vec[buffIter++] = i;
    if(buffIter == getAllocatedSize())
        buffIter = 0;
    if(size < getAllocatedSize())
        size++;
}

int CircularBuffer::getElement(unsigned index) const
{
    return vec[index];
}

int CircularBuffer::remove()
{
    if(size > 0)
    {
        buffIter--;
        size--;
        return vec[buffIter];
    }
    else
    {
       throw empty_buffor_exception();
    }
    
}