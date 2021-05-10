#include "mod.hpp"
#include <gtest/gtest.h>


TEST(mod, add)
{
    int a = 1;
    int b = 2;
    ASSERT_EQ(add(a, b), 3);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
