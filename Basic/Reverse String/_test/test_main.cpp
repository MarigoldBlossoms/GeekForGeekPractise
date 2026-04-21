#include <gtest/gtest.h>

#include "../_src/reversestring.h"

class ReverseStringParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<string, string>> {};

TEST_P(ReverseStringParameterizedTestFixture, ReverseStringTest)
{
    string input = std::get<0>(GetParam());

    ASSERT_EQ(reverseString(input), std::get<1>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  ReverseStringTest,
  ReverseStringParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple("Hello", "olleH"),
    std::make_tuple("91210", "01219"),
    std::make_tuple("Fish Sticks", "skcitS hsiF")
  )
);