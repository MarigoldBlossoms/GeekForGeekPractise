add_executable(
  QueueSTLTest
  test_main.cpp
)

target_link_libraries(
  QueueSTLTest
  queue
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(QueueSTLTest)