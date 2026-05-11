enable_testing()

add_executable(
  primeFactorsTests
  test_main.cpp
)

target_link_libraries(
  primeFactorsTests
  primeFactors
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(primeFactorsTests)