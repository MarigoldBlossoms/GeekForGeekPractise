cmake_minimum_required(VERSION 3.5.0)
project(ReverseString)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

#Create exe
add_executable(
  ReverseStringExe
  _src/main.cpp
)

target_link_libraries(
  ReverseStringExe
  reverseString
)

#For testing
enable_testing()
add_subdirectory(_src)
add_subdirectory(_test)