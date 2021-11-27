# Dieses Projekt wuerde auch für niedrigere CMake 
# Versionen funktionieren, jedoch ist für weitere 
# Beispiele eine höhere CMake Version notwendig, so 
# das wir an dieser Stelle auch eine etwas neuere 
# CMake Version erwarten
cmake_minimum_required(VERSION 3.7)

# Da lediglich C++ in diesem Projekt verwendet wird,
# wird das LANGUAGES Keyword verwendet, um CMake 
# nicht unnötig nach einem C Compiler suchen zu 
# lassen
project(code_3-2 
    LANGUAGES CXX  # CXX -> C++
    )

add_executable(hello_world main.cpp)
