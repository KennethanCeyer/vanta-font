enable_testing()
find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIR})
set(LIBS ${LIBS} ${CHECK_LIBRARIES} vanta_font_lib)
include_directories(. ../src)

add_executable(test_font test_font.c)
target_link_libraries(test_font ${LIBS})
add_test(test_font ${CMAKE_CURRENT_BINARY_DIR}/test_font)
