enable_testing()

add_executable(
  GetElementTest
  test_main.cpp
)

target_link_libraries(
  GetElementTest
  findelement
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(GetElementTest)