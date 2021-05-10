#include "mod.hpp"
#include <gtest/gtest.h>


TEST(mod2, add)
{
    int a = 1;
    int b = 2;
    ASSERT_EQ(add(a, b), 3);
}
