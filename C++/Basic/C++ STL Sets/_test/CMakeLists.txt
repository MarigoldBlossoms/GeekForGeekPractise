enable_testing()

add_executable(
  STLTests
  test_vector.cpp
  test_stack.cpp
)

target_link_libraries(
  STLTests
  stlsets
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(STLTests)