enable_testing()

add_executable(
  producttesting
  test_main.cpp
)

target_link_libraries(
  producttesting
  product
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(producttesting)