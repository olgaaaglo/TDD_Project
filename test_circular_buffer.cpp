#include "test.h"

TEST(CircularBufferTest, Construct)
{
    CircularBuffer cb(5);
    EXPECT_EQ(cb.size, 5);
}

/*class CircularBufferTest : public ::testing::Test
{
    CircularBuffer cb;
    void SetUp() override
    {

    }
};*/