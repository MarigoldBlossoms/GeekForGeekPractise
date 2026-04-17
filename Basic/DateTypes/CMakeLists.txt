cmake_minimum_required(VERSION 3.5.0)
project(DataSize)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


#Create libary
#add_library(<Lib Name> <File Name>)

#target_link_libraries(<EXE Name> <Lib Name>)

#add_subdirectory(<File Name>)
#install(TARGETS queuetest DESTINATION bin)


#For testing
enable_testing()
add_subdirectory(_src)
add_subdirectory(_test)