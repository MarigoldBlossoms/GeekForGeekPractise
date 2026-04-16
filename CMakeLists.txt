cmake_minimum_required(VERSION 3.5.0)
project(Queue)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


#add_executable(queuetest ../_tests/test_main.cpp)
#install(TARGETS queuetest DESTINATION bin)

add_library(queue ../_src/Queue.cpp)

enable_testing()

add_executable(
  queuetest
  ../_tests/test_main.cpp
)
target_link_libraries(
  queuetest
  queue
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(queuetest)