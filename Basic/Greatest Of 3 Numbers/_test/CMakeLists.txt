enable_testing()

add_executable(
    GreatestOfThreeTests
    test_main.cpp
)

target_link_libraries(
  GreatestOfThreeTests
  greatestOf3
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(GreatestOfThreeTests)