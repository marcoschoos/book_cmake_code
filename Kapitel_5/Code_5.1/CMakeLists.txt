cmake_minimum_required(VERSION 3.7)

project(code_5-1
    	LANGUAGES CXX
)

add_library(mathe SHARED) 
target_sources(mathe PRIVATE src/mathe.cpp)

