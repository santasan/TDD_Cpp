#include "Dollar.hpp"
#include <gtest/gtest.h>

TEST(Money, testMultiplication){
  Dollar five = Dollar(5);
  Dollar product = five.ReturnDollarTimes(2);
  ASSERT_EQ(10, product.amount);
  product = five.ReturnDollarTimes(3);
  ASSERT_EQ(15, product.amount);
}