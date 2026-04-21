add_executable(
    reverseStringTest
    test_main.cpp
)

target_link_libraries(
    reverseStringTest
    reverseString
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(reverseStringTest)