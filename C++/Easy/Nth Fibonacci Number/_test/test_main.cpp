#include <gtest/gtest.h>

#include "../_src/fibonacci.h"

class NFibParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(NFibParameterizedTestFixture, SumTest)
{
  ASSERT_EQ(nthFibonacci(std::get<0>(GetParam())), std::get<1>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  SumTests,
  NFibParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple(0, 0),
    std::make_tuple(1, 1),
    std::make_tuple(2, 1),
    std::make_tuple(3, 2),
    std::make_tuple(4, 3),
    std::make_tuple(5, 5)
  )
);