cmake_minimum_required(VERSION 3.8...3.19)

project(code_8-1 
    LANGUAGES CXX
)
    
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp17_exe main.cpp)

target_compile_features(cpp17_exe 
    PRIVATE cxx_std_17
    )

target_compile_definitions(cpp17_exe
    PRIVATE PRINT
    )

if(MSVC) 
    target_compile_options(cpp17_exe
        PRIVATE "/W4"
        )
else()
    target_compile_options(cpp17_exe
        PRIVATE "-Wall"
        )
endif()

