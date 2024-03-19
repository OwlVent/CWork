cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_executable(untitled main.c)

find_package( Curses REQUIRED )
include_directories(${CURSES_INCLUDE_DIR})
add_executable(untitled main.cpp)
target_link_libraries(untitled ${CURSES_INCLUDE_DIR})