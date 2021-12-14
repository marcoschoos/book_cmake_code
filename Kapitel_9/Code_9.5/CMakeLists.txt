cmake_minimum_required(VERSION 3.7...3.19)

project(code_9-5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
    
include(CMakePrintHelpers)

list(
  APPEND 
  CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
  )
find_package(GSL REQUIRED)

cmake_print_variables(GSL_INCLUDE_DIRS)

add_executable(gsl_test main.cpp)

target_link_libraries(
  gsl_test 
  PRIVATE Microsoft.GSL::GSL
  )
