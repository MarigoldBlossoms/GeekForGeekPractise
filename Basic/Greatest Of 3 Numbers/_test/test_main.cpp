#include <gtest/gtest.h>

#include "../_src/greatestOfThree.h"

using namespace std;

class GreatestOf3ParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<int, int, int, int>> {};

TEST_P(GreatestOf3ParameterizedTestFixture, greatestOf3Tests)
{
    int testOutput = greatestOfThree(get<0>(GetParam()), get<1>(GetParam()), get<2>(GetParam()));
    ASSERT_EQ(testOutput, get<3>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  greatestOf3Tests,
  GreatestOf3ParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple(2, 4, 6, 6),
    std::make_tuple(8, 10, 1, 10),
    std::make_tuple(-1, -5, -9, -1),
    std::make_tuple(0, 0, 10, 10)
  )
);