cmake_minimum_required(VERSION 3.7)

project(code_7-1
    	LANGUAGES CXX
)

message("Minimale CMake Version Hauptordner: ${CMAKE_MINIMUM_REQUIRED_VERSION}")

add_subdirectory(libs/math)

message("Minimale CMake Version Hauptordner: ${CMAKE_MINIMUM_REQUIRED_VERSION}")

add_executable(hello_math src/main.cpp)
target_link_libraries(hello_math PRIVATE mathe)
target_include_directories(hello_math PRIVATE libs/math)

