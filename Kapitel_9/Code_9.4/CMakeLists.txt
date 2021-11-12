cmake_minimum_required(VERSION 3.1)

project(code_9-4
    LANGUAGES CXX
    )
    
include(CMakePrintHelpers)

find_package(Boost 1.50 REQUIRED COMPONENTS filesystem)
find_package(OpenCV COMPONENTS core dnn)

cmake_print_variables(Boost_FOUND Boost_VERSION)
cmake_print_variables(OpenCV_FOUND OpenCV_VERSION)
cmake_print_variables(Boost_LIBRARIES Boost_INCLUDE_DIRS)
cmake_print_variables(OpenCV_LIBS OpenCV_INCLUDE_DIRS)

add_executable(boost_test main.cpp)

target_link_libraries(boost_test 
    PRIVATE 
    Boost::filesystem
    )
    
if(${OpenCV_FOUND})
   target_link_libraries(boost_test 
        PRIVATE 
        ${OpenCV_LIBS}
        )
    
    target_compile_definitions(boost_test
        PRIVATE 
        OpenCV_FOUND
    )
endif()
