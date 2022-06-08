cmake_minimum_required(VERSION 3.8...3.22)

project(code_7-1-2 LANGUAGES CXX)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

message("Minimale CMake Version Unterordner: " 
        "${CMAKE_MINIMUM_REQUIRED_VERSION}")

add_library(mathe SHARED) 
target_sources(mathe PRIVATE mathe.cpp)
target_include_directories(mathe PUBLIC .)
