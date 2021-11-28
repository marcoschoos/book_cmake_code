cmake_minimum_required(VERSION 3.7)

project(code_9-3
    LANGUAGES CXX
    )
    
include(CMakePrintHelpers)
include(CheckCXXSourceCompiles)

if(MSVC)
    set(CMAKE_REQUIRED_FLAGS "/std:c++17")
else()
    set(CMAKE_REQUIRED_FLAGS "-std=c++17")
endif()

check_cxx_source_compiles(
"int main()
{
    int position[2] = {1,2};
    auto [x,y] = position;     
    return 0;
}" 
CodeTest3 FAIL_REGEX "[Ww]arn")

cmake_print_variables(CodeTest3)

add_executable(hello_world main.cpp)

