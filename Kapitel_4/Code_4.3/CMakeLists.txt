cmake_minimum_required(VERSION 3.7...3.22)

project(code_4-3 LANGUAGES CXX)
 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(hello_world main.cpp)
add_executable(hello_world_2 main.cpp)

set_property(
  TARGET hello_world
  PROPERTY 
    CXX_STANDARD 11 
  )
get_property(
  HW_CXX_STD
  TARGET hello_world 
  PROPERTY CXX_STANDARD
  )
get_target_property(
  HW2_CXX_STD 
  hello_world_2
  CXX_STANDARD
  )
get_target_property(
  HW_CXX_STD_RQ 
  hello_world 
  CXX_STANDARD_REQUIRED
  )
get_property(
  HW2_CXX_STD_RQ 
  TARGET hello_world_2
  PROPERTY CXX_STANDARD_REQUIRED
  )

message("HW CXX STD: ${HW_CXX_STD}")
message("HW2 CXX STD: ${HW2_CXX_STD}")
message("HW CXX STD RQ: ${HW_CXX_STD_RQ}")
message("HW2 CXX STD RQ: ${HW2_CXX_STD_RQ}")
