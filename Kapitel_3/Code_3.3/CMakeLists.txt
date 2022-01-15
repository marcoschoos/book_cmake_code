cmake_minimum_required(
  VERSION 3.12...3.22
  FATAL_ERROR
  )

project(
  code_3-3
  LANGUAGES CXX
  DESCRIPTION "Code 3.3 - Hello World"
  HOMEPAGE_URL "www.codingwithmagga.com"
  VERSION 1.0.0
  )

add_executable(
  hello_world EXCLUDE_FROM_ALL
  main.cpp
  )
