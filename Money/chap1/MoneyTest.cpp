#include "Dollar.hpp"
#include <gtest/gtest.h>

TEST(Money, testMultiplication){
  Dollar five = Dollar(5);
  five.times(2);
  ASSERT_EQ(10, five.amount);
}