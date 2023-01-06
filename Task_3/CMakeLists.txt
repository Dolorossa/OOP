cmake_minimum_required(VERSION 3.18)

project(Task_3)

set(TASK_3_DIR ${CMAKE_CURRENT_SOURCE_DIR}/task_3)
set(TASK_3_INCLUDE_DIR ${TASK_3_DIR}/include)
message("TASK_3_DIR = ${TASK_3_DIR}")
message("TASK_3_INCLUDE_DIR = ${TASK_3_INCLUDE_DIR}")

add_subdirectory(task_3)
add_subdirectory(googletest)

include_directories(${TASK_3_INCLUDE_DIR})

add_executable(main main.cpp)
target_link_libraries(main task_3)

add_executable(tests tests.cpp)
target_link_libraries(tests task_3 gtest gtest_main)