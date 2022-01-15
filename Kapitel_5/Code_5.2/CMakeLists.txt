cmake_minimum_required(VERSION 3.7...3.22)

project(code_5-2 LANGUAGES CXX)

add_library(
  mathe 
  SHARED 
  src/mathe.cpp
  ) 
target_include_directories(
  mathe
  PUBLIC include
  )
