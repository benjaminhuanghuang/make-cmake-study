cmake_minimum_required(VERSION 3.7)

project(sample1)

add_compile_options(-std=c++17)

include_directories(include)

AUX_SOURCE_DIRECTORY(src SRC_LIST) 
add_executable(${PROJECT_NAME} ${SRC_LIST})
