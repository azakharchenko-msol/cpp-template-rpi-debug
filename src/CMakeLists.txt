cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)

# set(BUILD_SHARED_LIBS OFF)
add_executable(cpp-template "main.cpp")

target_link_libraries(cpp-template PRIVATE spdlog pthread)
