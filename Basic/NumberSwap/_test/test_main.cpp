#include <gtest/gtest.h>

#include "../_src/numberswap.h"

class NumSwapParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(NumSwapParameterizedTestFixture, NumSwapTests)
{
  int num1 = std::get<0>(GetParam());
  int num2 = std::get<1>(GetParam());

  int num1Expected = num2;
  int num2Expected = num1;

  swap(num1, num2);

  ASSERT_EQ(num1, num1Expected);
  ASSERT_EQ(num2, num2Expected);
}

INSTANTIATE_TEST_CASE_P(
  NumSwapTests,
  NumSwapParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple(2, 4),
    std::make_tuple(8, 10),
    std::make_tuple(5, -1),
    std::make_tuple(0, 8)
  )
);