# Dieses Projekt würde auch für niedrigere CMake-
# Versionen funktionieren, jedoch ist für weitere 
# Beispiele eine höhere CMake-Version notwendig, sodass 
# wir an dieser Stelle auch eine etwas neuere CMake-
# Version erwarten.
cmake_minimum_required(VERSION 3.7)

# Da lediglich C++ in diesem Projekt verwendet wird,
# wird das LANGUAGES-Keyword verwendet, um CMake nicht
# unnötig nach einem C-Compiler suchen zu lassen.
project(
  code_3-2
  LANGUAGES CXX # CXX -> C++
  )

# Erzeugen der ausführbaren Datei hello_world aus der
# Soure-Datei main.cpp.
add_executable(
  hello_world
  main.cpp
  )
