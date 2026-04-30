add_executable(
    lastDigitTest
    test_main.cpp
)

target_link_libraries(
  lastDigitTest
  lastdigit
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(lastDigitTest)