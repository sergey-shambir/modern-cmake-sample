cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(modern-cmake-sample)

# Pass -DBUILD_TEST=ON to build unit tests
option(BUILD_TEST "Build the unit tests" OFF)

include(cmake/functions.cmake)

add_subdirectory(libs/libhello)
add_subdirectory(libs/libgoodbye)
add_subdirectory(hellogoodbyeapp)

if(BUILD_TEST)
    enable_testing()
    add_subdirectory(tests/libhellotest)
    add_subdirectory(tests/libgoodbyetest)
endif()
