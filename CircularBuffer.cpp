#include "CircularBuffer.h"

CircularBuffer::CircularBuffer(unsigned s)
{
    vec.resize(s);
}
unsigned CircularBuffer::getAllocatedSize() const
{
    return vec.size();
}