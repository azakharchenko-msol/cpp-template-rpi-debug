
cmake_minimum_required (VERSION 3.22)
project("cpp template")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

include(cmake/spdlog.cmake)
include(cmake/jsondto.cmake)
include(cmake/gtest.cmake)

add_subdirectory ("src")
add_subdirectory(src/sample)