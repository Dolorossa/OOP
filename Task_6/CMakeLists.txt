cmake_minimum_required(VERSION 3.18)

project(Task_6)

set(TASK_6_DIR ${CMAKE_CURRENT_SOURCE_DIR}/task_6)
set(TASK_6_INCLUDE_DIR ${TASK_6_DIR}/include)
message("TASK_6_DIR = ${TASK_6_DIR}")
message("TASK_6_INCLUDE_DIR = ${TASK_6_INCLUDE_DIR}")

add_subdirectory(task_6)
add_subdirectory(googletest)

include_directories(${TASK_6_INCLUDE_DIR})

add_executable(main main.cpp)
target_link_libraries(main task_6)

add_executable(tests tests.cpp)
target_link_libraries(tests task_6 gtest gtest_main)
