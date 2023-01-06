cmake_minimum_required(VERSION 3.18)

project(Task_4)

set(TASK_4_DIR ${CMAKE_CURRENT_SOURCE_DIR}/task_4)
set(TASK_4_INCLUDE_DIR ${TASK_4_DIR}/include)
message("TASK_4_DIR = ${TASK_4_DIR}")
message("TASK_4_INCLUDE_DIR = ${TASK_4_INCLUDE_DIR}")

add_subdirectory(task_4)

include_directories(${TASK_4_INCLUDE_DIR})

add_executable(main main.cpp)
target_link_libraries(main task_4)