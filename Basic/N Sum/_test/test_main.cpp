#include <gtest/gtest.h>
#include "../_src/nsum.h"

using namespace std;

class NSumParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(NSumParameterizedTestFixture, NSumTest)
{
  ASSERT_EQ(nSum(get<0>(GetParam())), get<1>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  NSumTest,
  NSumParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple(0, 0),
    std::make_tuple(1, 1),
    std::make_tuple(2, 3),
    std::make_tuple(3, 6),
    std::make_tuple(4, 10),
    std::make_tuple(5, 15),
    std::make_tuple(6, 21),
    std::make_tuple(7, 28),
    std::make_tuple(8, 36),
    std::make_tuple(9, 45),
    std::make_tuple(10, 55)
  )
);