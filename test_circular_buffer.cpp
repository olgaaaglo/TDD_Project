#include "test.h"
#include "CircularBuffer.h"


TEST(CircularBufferTest1, Construct)
{
    CircularBuffer cb(5);
    EXPECT_EQ(cb.vec.size(), 5);
}

class CircularBufferTest : public ::testing::Test
{
public:
    CircularBuffer* cb;
    void SetUp() override
    {
        cb = new CircularBuffer(5);
        for(int i = 1; i < 8; i++)
            cb->add(i);

    }
    void TearDown() override
    {
        delete cb;
    }

};

TEST_F(CircularBufferTest, GetAllocatedSizeTest)
{
    EXPECT_EQ(cb->getAllocatedSize(), 5);
}

TEST_F(CircularBufferTest, GetSizeTest)
{
    EXPECT_EQ(cb->getSize(), 5);
}

TEST_F(CircularBufferTest, AddWhenFullTest)
{
    EXPECT_EQ(cb->getElement(0), 6);
}