enable_testing()

add_executable(
  nFibTest
  test_main.cpp
)

target_link_libraries(
  nFibTest
  nFib
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(nFibTest)