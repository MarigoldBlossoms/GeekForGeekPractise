#include <gtest/gtest.h>

#include "../_src/binary.h"

using namespace std;

class PowerOf2ParameterizedTestFixture :public ::testing::TestWithParam<tuple<int, int>> {};

TEST_P(PowerOf2ParameterizedTestFixture, PowerOf2Tests)
{
  ASSERT_EQ(powerOf2(get<0>(GetParam())), get<1>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  PowerOf2Tests,
  PowerOf2ParameterizedTestFixture,
  ::testing::Values(
    make_tuple(2, 4),
    make_tuple(3, 8),
    make_tuple(0, 1),
    make_tuple(6, 64)
  )
);


class MaxPowerOf2ParameterizedTestFixture :public ::testing::TestWithParam<tuple<int, int>> {};

TEST_P(MaxPowerOf2ParameterizedTestFixture, MaxPowerOf2Tests)
{
  ASSERT_EQ(findMaxPowerOf2(get<0>(GetParam())), get<1>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  MaxPowerOf2Tests,
  MaxPowerOf2ParameterizedTestFixture,
  ::testing::Values(
    make_tuple(9, 3),
    make_tuple(7, 2),
    make_tuple(1, 0),
    make_tuple(32, 5)
  )
);