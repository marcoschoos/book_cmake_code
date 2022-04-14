cmake_minimum_required(VERSION 3.7...3.22)

project(code_4-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCES main.cpp hello_world_printer.cpp)
set(NAME_EXECUTABLE hello_world)

message("Source Dateien: ${SOURCES}")
message("Name Executable: ${NAME_EXECUTABLE}")

add_executable(${NAME_EXECUTABLE} ${SOURCES})

set(SOURCES)
unset(NAME_EXECUTABLE)

message("Source Dateien: ${SOURCES}")
message("Name Executable: ${NAME_EXECUTABLE}")
