cmake_minimum_required(VERSION 3.5)

project(code_8-1 
    LANGUAGES CXX
)
    
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp17_exe main.cpp)

target_compile_features(cpp17_exe 
    PRIVATE cxx_std_17
    )

target_compile_definitions(cpp17_exe
    PRIVATE PRINT
    )

target_compile_options(cpp17_exe
    PRIVATE -Wunused
    )

