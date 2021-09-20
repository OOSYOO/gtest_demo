#include <iostream>
#include "gtest/gtest.h"

int add(int a, int b)
{
    return a+b;
}

TEST(demo, func1)
{
    EXPECT_EQ(5, add(2, 3));
}

TEST(demo, func2)
{
    EXPECT_EQ(5, add(2, 2));
}

TEST(demo, func3)
{
    EXPECT_EQ(5, add(2, 4));
}


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}