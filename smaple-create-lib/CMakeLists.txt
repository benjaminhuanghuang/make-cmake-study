cmake_minimum_required(VERSION 3.7)

project(sample1)

add_compile_options(-std=c++17)

include_directories(include)

AUX_SOURCE_DIRECTORY(src SRC_LIST) 

# STATIC: static lib   SHARED: dynamic lib    MODULE: 
add_library(hello_static_lib STATIC src/hello.cpp)