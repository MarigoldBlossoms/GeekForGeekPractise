enable_testing()

add_executable(
    TransposeTesting
    test_main.cpp
)

target_link_libraries(
    TransposeTesting
    transposearray
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(TransposeTesting)