cmake_minimum_required (VERSION 2.8.8)
project (ProjectEuler)

enable_testing()

add_subdirectory( test build/test )

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}/src")

file(GLOB LIB_SOURCES "src/euler/*.cpp")
file(GLOB APP_SOURCES "src/*.cpp")

add_library (euler ${LIB_SOURCES})

add_executable(Euler ${APP_SOURCES})
target_link_libraries(Euler euler)
