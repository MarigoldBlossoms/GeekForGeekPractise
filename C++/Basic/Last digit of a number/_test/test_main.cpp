#include <gtest/gtest.h>
#include "../_src/lastdigit.h"

using namespace std;

class LastDigitParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(LastDigitParameterizedTestFixture, LastDigitTest)
{
    int testValue = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(lastDigit(testValue), expected);
}

INSTANTIATE_TEST_CASE_P(
  LastDigitTest,
  LastDigitParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple(20, 0),
    std::make_tuple(8, 8),
    std::make_tuple(-12345, 5),
    std::make_tuple(54321, 1)
  )
);