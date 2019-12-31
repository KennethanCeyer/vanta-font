cmake_minimum_required(VERSION 3.13)
project(vanta_font_lib)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules")

add_subdirectory(src)
option(PACKAGE_TESTS "Build the tests" ON)

if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
