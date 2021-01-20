# Dieses Projekt wuerde auch fuer niedriger CMake 
# Versionen funktionieren, jedoch ist fuer weitere 
# Beispiele eine hoehere CMake Version notwendig, so 
# das wir an dieser Stelle auch eine etwas neuere 
# CMake Version erwarten
cmake_minimum_required(VERSION 3.5)

# Da lediglich C++ in diesem Projekt verwendet wird,
# wird das LANGUAGES Keyword verwendet, um CMake 
# nicht unnoetig nach einem C Compiler suchen zu 
# lassen
project(code_3-2 
    LANGUAGES CXX  # CXX -> C++
    )

add_executable(hello_world main.cpp)
