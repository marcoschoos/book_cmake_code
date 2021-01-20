cmake_minimum_required(VERSION 3.5...3.19)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_VERSION})
endif()

project(code_4-4
    LANGUAGES CXX
    VERSION 1.0.0
    )

add_executable(hello_world main.cpp)

if(CMAKE_GENERATOR STREQUAL "Xcode")
    message(STATUS "CMake Generator ist Xcode")
elseif(CMAKE_GENERATOR STREQUAL "Unix Makefiles")
    message(STATUS "CMake Generator ist Unix Makefiles")
else()
    message(STATUS "CMake Generator ist ${CMAKE_GENERATOR}")
endif()

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  message(STATUS "Konfiguration auf Linux")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
  message(STATUS "Konfiguration auf macOS")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
  message(STATUS "Konfiguration auf Windows")
else()
  message(STATUS "Konfiguration auf ${CMAKE_SYSTEM_NAME}")
endif()
