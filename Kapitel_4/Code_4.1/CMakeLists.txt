cmake_minimum_required(VERSION 3.5...3.19)

project(hello_world_project
    LANGUAGES CXX
    VERSION 1.0.0
    )
    
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES main.cpp hello_world_printer.cpp) 
set(NAME_EXECUTABLE hello_world)

message("Source Dateien: ${SOURCES}") 
message("Name Executable: ${NAME_EXECUTABLE}") 

add_executable(${NAME_EXECUTABLE} ${SOURCES})

set(SOURCES)
unset(NAME_EXECUTABLE)

message("Source Dateien: ${SOURCES}") 
message("Name Executable: ${NAME_EXECUTABLE}") 
