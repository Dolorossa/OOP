cmake_minimum_required(VERSION 3.18)

project(Hashtag)

set(HASHTAG_DIR ${CMAKE_CURRENT_SOURCE_DIR}/hashtag)
set(HASHTAG_INCLUDE_DIR ${HASHTAG_DIR}/include)
message("HASHTAG_DIR = ${HASHTAG_DIR}")
message("HASHTAG_INCLUDE_DIR = ${HASHTAG_INCLUDE_DIR}")

add_subdirectory(hashtag)
add_subdirectory(googletest)

include_directories(${HASHTAG_INCLUDE_DIR})

add_executable(main main.cpp)
target_link_libraries(main hashtag)

add_executable(tests tests.cpp)
target_link_libraries(tests hashtag gtest gtest_main)
