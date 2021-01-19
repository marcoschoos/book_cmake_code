cmake_minimum_required(VERSION 3.5)

project(hello_world_project 
    LANGUAGES CXX
    )
    
set(BUILD_EXECUTABLE TRUE CACHE BOOL 
    "Falls true, wird eine zweite ausführbare Datei erzeugt"
    ) 

add_executable(hello_world main.cpp)

if (${BUILD_EXECUTABLE})
    add_executable(hello_world_2 main.cpp)
endif()
