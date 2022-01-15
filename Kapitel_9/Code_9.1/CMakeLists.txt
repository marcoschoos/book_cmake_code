cmake_minimum_required(VERSION 3.7...3.22)

project(code_9-1 LANGUAGES CXX)
 
include(CMakePrintHelpers)
 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(hello_world main.cpp)
add_executable(hello_world_2 main.cpp)

set_property(
    TARGET hello_world
    PROPERTY CXX_STANDARD 11 
    )
    
cmake_print_variables(
    CMAKE_CXX_STANDARD CMAKE_CXX_STANDARD_REQUIRED
    )
    
cmake_print_properties(
    TARGETS 
        hello_world hello_world_2 
    PROPERTIES
        CXX_STANDARD CXX_STANDARD_REQUIRED
    )
