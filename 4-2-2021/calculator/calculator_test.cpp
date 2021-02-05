#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, addition) {
    EXPECT_EQ(3, addition(1, 2));
    EXPECT_EQ(47, addition(35, 12));
    EXPECT_EQ(57, addition(29, 28));
}

TEST(CalculatorTest, subtraction) {
    EXPECT_EQ(-1, subtraction(1, 2));
    EXPECT_EQ(23, subtraction(35, 12));
    EXPECT_EQ(1, subtraction(29, 28));
}

TEST(CalculatorTest, multiplication) {
    EXPECT_EQ(2, multiplication(1, 2));
    EXPECT_EQ(420, multiplication(35, 12));
    EXPECT_EQ(812, multiplication(29, 28));
}

TEST(CalculatorTest, division) {
    EXPECT_EQ(0.5, division(1.0, 2.0));
    EXPECT_EQ(2.91667, division(35.0, 12.0));
    EXPECT_EQ(1.03571, division(29.0, 28.0));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}