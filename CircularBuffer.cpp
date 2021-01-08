#include "CircularBuffer.h"

CircularBuffer::CircularBuffer(unsigned s)
{
    vec.resize(s);
}
unsigned CircularBuffer::getAllocatedSize() const
{
    return vec.size();
}

unsigned CircularBuffer::getSize() const
{

}

void CircularBuffer::add(int i)
{
    
}