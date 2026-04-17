enable_testing()

add_executable(
  DataSizeTests
  test_main.cpp
)

target_link_libraries(
  DataSizeTests
  getbytes
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(DataSizeTests)