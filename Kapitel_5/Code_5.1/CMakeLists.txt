cmake_minimum_required(VERSION 3.5)

project(code_5-1
    	LANGUAGES CXX
)

add_library(mathe SHARED) 
target_sources(mathe PRIVATE src/mathe.cpp)

