cmake_minimum_required(VERSION 3.13)
project(vanta_font)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/font.c)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")
enable_testing()
add_subdirectory(src)
add_subdirectory(tests)
option(PACKAGE_TESTS "Build the tests" ON)

if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

add_executable(vanta_font ${SOURCE_FILES})
