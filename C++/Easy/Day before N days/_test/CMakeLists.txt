enable_testing()

add_executable(
  DayOfWeekTests
  test_main.cpp
)

target_link_libraries(
  DayOfWeekTests
  dayOfWeek
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(DayOfWeekTests)