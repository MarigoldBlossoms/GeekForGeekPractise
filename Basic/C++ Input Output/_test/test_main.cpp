#include <gtest/gtest.h>

#include "../_src/product.h"

class ProductParameterizedTestFixture :public ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(ProductParameterizedTestFixture, ProductTests)
{
  int num1 = std::get<0>(GetParam());
  int num2 = std::get<1>(GetParam());
  int expected = std::get<2>(GetParam());
  
  ASSERT_EQ(multiplication(num1, num2), expected);
}

INSTANTIATE_TEST_CASE_P(
  ProductTests,
  ProductParameterizedTestFixture,
  ::testing::Values(
    std::make_tuple(2, 4, 8),
    std::make_tuple(8, 10, 80),
    std::make_tuple(5, -1, -5),
    std::make_tuple(0, 8, 0)
  )
);