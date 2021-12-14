cmake_minimum_required(VERSION 3.7...3.19)

project(code_9-6 LANGUAGES CXX)
    
include(CMakePrintHelpers)

list(
  APPEND 
  CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
  )
find_package(GLIB2 REQUIRED)

cmake_print_variables(PKG_GLIB2_INCLUDEDIR)
cmake_print_variables(PKG_GLIB2_INCLUDE_DIRS)

cmake_print_variables(PKG_GLIB2_LIBDIR)
cmake_print_variables(PKG_GLIB2_LIBRARY_DIRS)

cmake_print_variables(PKG_GLIB2_LIBRARIES)

cmake_print_variables(GLIB2_INCLUDE_DIRS)
cmake_print_variables(GLIB2_LIBRARIES)

add_executable(glib2_test main.cpp)

target_link_libraries(
  glib2_test
  PRIVATE GLIB2::GLIB2
  )
