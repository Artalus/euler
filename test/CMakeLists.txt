cmake_minimum_required (VERSION 2.8.8)

project(Euler_test)
enable_testing()
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake.modules/")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

find_path(CATCH_INCLUDE_DIR "catch.hpp")
include_directories(${INCLUDE_DIRECTORIES} ${CATCH_INCLUDE_DIR})

file(GLOB SOURCE_FILES "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(${PROJECT_NAME})

