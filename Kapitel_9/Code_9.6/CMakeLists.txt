cmake_minimum_required(VERSION 3.7)

project(code_9-6
    LANGUAGES CXX
    )
    
include(CMakePrintHelpers)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(LibXml2 REQUIRED)

cmake_print_variables(PC_LIBXML_INCLUDE_DIRS)

add_executable(libxml2_test main.cpp)

target_link_libraries(libxml2_test
    PRIVATE 
    ${LIBXML2_LIBRARY}
    )
    
target_include_directories(libxml2_test
    PRIVATE
    ${LIBXML2_INCLUDE_DIRS}
    )
