cmake_minimum_required(VERSION 3.6)

project(math_lib
    	LANGUAGES CXX
)

message("Minimale CMake Version Unterordner: ${CMAKE_MINIMUM_REQUIRED_VERSION}")

add_library(mathe SHARED) 
target_sources(mathe PRIVATE mathe.cpp)

