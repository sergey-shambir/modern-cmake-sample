# Требуем как можно более высокую версию.
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

# Инструкция project не может быть помещена в функцию.
project(modern-cmake-sample)

# Инструкция enable_testing неявно объявляет опцию BUILD_TESTING,
#  по умолчанию BUILD_TESTING=ON.
enable_testing()

include(cmake/functions.cmake)

add_subdirectory(libs/libhello)
add_subdirectory(libs/libgoodbye)
add_subdirectory(hellogoodbyeapp)

if(BUILD_TESTING)
    add_subdirectory(tests/libhellotest)
    add_subdirectory(tests/libgoodbyetest)
endif()
