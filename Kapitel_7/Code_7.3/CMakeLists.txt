cmake_minimum_required(VERSION 3.7...3.19)

project(code_7-3-1 LANGUAGES CXX)

message("CU_SOURCE_DIR HO: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CU_BINARY_DIR HO: ${CMAKE_CURRENT_BINARY_DIR}")
message("CU_LIST_DIR HO: ${CMAKE_CURRENT_LIST_DIR}")
message("CU_LIST_FILE HO: ${CMAKE_CURRENT_LIST_FILE}")
message("CU_LIST_LINE HO: ${CMAKE_CURRENT_LIST_LINE} \n")

include(libs/math/CMakeLists.txt)

message("CU_SOURCE_DIR HO: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CU_BINARY_DIR HO: ${CMAKE_CURRENT_BINARY_DIR}")
message("CU_LIST_DIR HO: ${CMAKE_CURRENT_LIST_DIR}")
message("CU_LIST_FILE HO: ${CMAKE_CURRENT_LIST_FILE}")
message("CU_LIST_LINE HO: ${CMAKE_CURRENT_LIST_LINE}")

add_executable(hello_math src/main.cpp)
target_link_libraries(hello_math PRIVATE mathe)
target_include_directories(hello_math PRIVATE libs/math)
