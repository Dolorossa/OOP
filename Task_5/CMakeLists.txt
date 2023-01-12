cmake_minimum_required (VERSION 3.2)
project (Task_5)
SET(CMAKE_CXX_STANDARD 11)

find_package (Threads)
add_executable (main src/main.cpp)
target_link_libraries (main Threads::Threads)