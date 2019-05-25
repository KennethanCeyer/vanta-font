cmake_minimum_required(VERSION 3.13)  # CMake version check
project(vanta_font)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES src/font.c)

add_subdirectory(src)

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(vanta_font ${SOURCE_FILES})