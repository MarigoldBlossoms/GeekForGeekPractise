#include <gtest/gtest.h>

#include "../_src/concatstrings.h"

class ConcatStringsParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<string, string, string>> {};

TEST_P(ConcatStringsParameterizedTestFixture, ConcatStringTests)
{
  ASSERT_EQ(conCat(std::get<0>(GetParam()), std::get<1>(GetParam())), std::get<2>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  ConcatStringTests,
  ConcatStringsParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple("He", "llo", "Hello"),
    std::make_tuple("Con", "Cat", "ConCat"),
    std::make_tuple("Bye-", "bye", "Bye-bye")
  )
);