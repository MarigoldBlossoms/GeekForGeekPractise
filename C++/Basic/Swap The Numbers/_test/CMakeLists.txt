enable_testing()

add_executable(
  numberswaptest
  ../_test/test_main.cpp
)

target_link_libraries(
  numberswaptest
  numberswap
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(numberswaptest)