cmake_minimum_required(VERSION 3.7)

project(sample1)

add_compile_options(-std=c++17)

include_directories(include)

AUX_SOURCE_DIRECTORY(src SRC_LIST) 

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(LIBRARY_OUTPUT_NAME ${PROJECT_NAME})

# STATIC: static lib   SHARED: dynamic lib    MODULE: 
add_library(hello_static_lib STATIC src/hello.cpp)