cmake_minimum_required(VERSION 3.7...3.19)

project(code_5-3
    	LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

add_library(main_bib 
    SHARED src/main_bib/main_bib.cpp)
add_library(public_bib 
    SHARED src/public_bib/public_bib.cpp)
add_library(private_bib 
    STATIC src/private_bib/private_bib.cpp)

target_include_directories(main_bib 
    PUBLIC include/main_bib)
target_include_directories(public_bib 
    PUBLIC include/public_bib)
target_include_directories(private_bib 
    PUBLIC include/private_bib)

target_link_libraries(main_bib
    PUBLIC public_bib
    PRIVATE private_bib
)

add_executable(main_exe src/main.cpp)
target_link_libraries(main_exe 
    PRIVATE main_bib
)

