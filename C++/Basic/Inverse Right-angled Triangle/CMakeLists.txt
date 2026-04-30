cmake_minimum_required(VERSION 3.5.0)
project(PrintInverseTriangle)

add_library(printTriangle _src/printtriangle.cpp)
add_executable(
  InverseRightangledTriangle
  ../_src/main.cpp
)

target_link_libraries(InverseRightangledTriangle printTriangle)