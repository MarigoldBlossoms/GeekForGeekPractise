cmake_minimum_required(VERSION 3.5.0)
project(RightAngledTriangle)

add_executable(
    rightAngledTriangle
    _src/main.cpp
)

target_link_libraries(
    rightAngledTriangle
    rightangledtriangle
)

add_subdirectory(_src)