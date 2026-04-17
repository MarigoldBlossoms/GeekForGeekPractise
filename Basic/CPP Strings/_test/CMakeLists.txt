enable_testing()

add_executable(
  ConcatString
  test_main.cpp
)

target_link_libraries(
  ConcatString
  concatstrings
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(ConcatString)