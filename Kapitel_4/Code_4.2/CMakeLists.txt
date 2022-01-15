cmake_minimum_required(VERSION 3.7...3.22)

project(code_4-2 LANGUAGES CXX)

set(BUILD_EXECUTABLE
    TRUE
    CACHE BOOL 
    "Erzeugt ein zweite ausführbare Datei."
    )

add_executable(hello_world main.cpp)

if(${BUILD_EXECUTABLE})
  add_executable(hello_world_2 main.cpp)
endif()
