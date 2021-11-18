cmake_minimum_required(VERSION 3.7)

project(code_7-2
    	LANGUAGES CXX
)

message("SOURCE_DIR HO: ${CMAKE_SOURCE_DIR}")
message("BINARY_DIR HO: ${CMAKE_BINARY_DIR}")
message("CU_SOURCE_DIR HO: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CU_BINARY_DIR HO: ${CMAKE_CURRENT_BINARY_DIR} \n")

add_subdirectory(libs/math)

message("SOURCE_DIR HO: ${CMAKE_SOURCE_DIR}")
message("BINARY_DIR HO: ${CMAKE_BINARY_DIR}")
message("CU_SOURCE_DIR HO: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CU_BINARY_DIR HO: ${CMAKE_CURRENT_BINARY_DIR}")

add_executable(hello_math src/main.cpp)
target_link_libraries(hello_math PRIVATE mathe)
target_include_directories(hello_math PRIVATE libs/math)

