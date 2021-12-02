cmake_minimum_required(VERSION 3.9...3.19)

project(code_11-1
    	LANGUAGES CXX
)

add_library(mathe SHARED src/mathe.cpp) 
target_include_directories(mathe PUBLIC include)

find_package(Doxygen REQUIRED doxygen)

doxygen_add_docs(erstelle_doku
    ${CMAKE_CURRENT_SOURCE_DIR}/include)
