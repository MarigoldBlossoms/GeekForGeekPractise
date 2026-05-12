add_executable(
  DecimalToBinaryTests
  test_main.cpp
)

target_link_libraries(
  DecimalToBinaryTests
  Binary
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(DecimalToBinaryTests)