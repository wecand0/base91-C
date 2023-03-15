cmake_minimum_required(VERSION 3.24)
project(untitled C)

add_subdirectory(src)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} base91)
target_include_directories(${PROJECT_NAME} PUBLIC src)
