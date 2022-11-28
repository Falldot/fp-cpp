#include <gtest/gtest.h>

#include "fp-cpp/core.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {

    Hello();

    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}