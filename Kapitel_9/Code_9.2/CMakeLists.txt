cmake_minimum_required(VERSION 3.5)

project(code_9-2
    LANGUAGES CXX
    )
    
include(CMakePrintHelpers)
include(CheckCXXSourceCompiles)

check_cxx_source_compiles(
"#include <iostream>
int main()
{
    std::cout << 'Hello World!' << std::endl;
    return 0;
}" 
CodeTest1)

check_cxx_source_compiles(
"int main()
{
    std::cout << 'Hello World!' << std::endl;
    return 0;
}" 
CodeTest2)

check_cxx_source_compiles(
"int main()
{
    int position[2] = {1,2};
    auto [x,y] = position;     
    return 0;
}" 
CodeTest3 FAIL_REGEX "[Ww]arn")

cmake_print_variables(CodeTest1 CodeTest2 CodeTest3)

add_executable(hello_world main.cpp)

