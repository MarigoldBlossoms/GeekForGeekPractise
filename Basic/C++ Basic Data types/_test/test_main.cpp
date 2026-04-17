#include <gtest/gtest.h>

#include "../_src/getbytes.h"

using namespace std;

class DataSizeParameterizedTestFixture :public ::testing::TestWithParam<tuple<string, int>> {};

TEST_P(DataSizeParameterizedTestFixture, DataSizeTests)
{
  ASSERT_EQ(BasicDataType(get<0>(GetParam())), get<1>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  DataSizeTests,
  DataSizeParameterizedTestFixture,
  ::testing::Values(
    make_tuple("a", 1),
    make_tuple("8", 4),
    make_tuple("-1", 4),
    make_tuple("101", 4),
    make_tuple("1.2345", 4),
    make_tuple("1.2345678", 8),
    make_tuple("123.45", 4),
    make_tuple("123.45678910", 8),
    make_tuple("@", 1)
  )
);