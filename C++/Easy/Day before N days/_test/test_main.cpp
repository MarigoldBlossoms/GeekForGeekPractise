#include <gtest/gtest.h>

#include "../_src/dayofweek.h"

using namespace std;

class DayOfWeekParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(DayOfWeekParameterizedTestFixture, DayOfWeekTest)
{
    int testOutput = nthDay(get<0>(GetParam()), get<1>(GetParam()));
    int expected = get<2>(GetParam());
    ASSERT_EQ(testOutput, expected);
}

INSTANTIATE_TEST_CASE_P(
  DayOfWeekTest,
  DayOfWeekParameterizedTestFixture,
  ::testing::Values(
    make_tuple(4, 3, 1),
    make_tuple(2, 19, 4)
  )
);