enable_testing()

add_executable(
  nSumTest
  test_main.cpp
)

target_link_libraries(
  nSumTest
  nsum
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(nSumTest)