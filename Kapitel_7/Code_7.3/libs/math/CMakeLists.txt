cmake_minimum_required(VERSION 3.8...3.19)

project(math_lib
    	LANGUAGES CXX
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

message("CU_SOURCE_DIR UO: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CU_BINARY_DIR UO: ${CMAKE_CURRENT_BINARY_DIR}")
message("CU_LIST_DIR UO: ${CMAKE_CURRENT_LIST_DIR}")
message("CU_LIST_FILE UO: ${CMAKE_CURRENT_LIST_FILE}")

message("CU_LIST_LINE UO: ${CMAKE_CURRENT_LIST_LINE} \n")

add_library(mathe SHARED) 
target_sources(mathe PRIVATE ${CMAKE_CURRENT_LIST_DIR}/mathe.cpp)

