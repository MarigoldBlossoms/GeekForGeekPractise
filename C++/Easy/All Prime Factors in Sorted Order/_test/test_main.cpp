#include <gtest/gtest.h>

#include "../_src/primefactors.h"

using namespace std;

class PrimeCheckParameterizedTestFixture :public ::testing::TestWithParam<tuple<int, bool>> {};

TEST_P(PrimeCheckParameterizedTestFixture, PrimeCheckTests)
{
  ASSERT_EQ(isPrime(get<0>(GetParam())), get<1>(GetParam()));
}

INSTANTIATE_TEST_CASE_P(
  PrimeCheckTests,
  PrimeCheckParameterizedTestFixture,
  ::testing::Values(
    make_tuple(2, true),
    make_tuple(3, true),
    make_tuple(4, false),
    make_tuple(10, false),
    make_tuple(23, true),
    make_tuple(49, false)
  )
);