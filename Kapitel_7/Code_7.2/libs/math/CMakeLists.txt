cmake_minimum_required(VERSION 3.8...3.19)

project(math_lib
    	LANGUAGES CXX
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

message("SOURCE_DIR UO: ${CMAKE_SOURCE_DIR}")
message("BINARY_DIR UO: ${CMAKE_BINARY_DIR}")
message("CU_SOURCE_DIR UO: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CU_BINARY_DIR UO: ${CMAKE_CURRENT_BINARY_DIR} \n")

add_library(mathe SHARED) 
target_sources(mathe PRIVATE mathe.cpp)

