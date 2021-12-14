cmake_minimum_required(VERSION 3.7...3.19)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
  cmake_policy(VERSION ${CMAKE_VERSION})
endif()

project(code_4-4 LANGUAGES CXX)

add_executable(hello_world main.cpp)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
  message("Konfiguration auf Linux")
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin")
  message("Konfiguration auf macOS")
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
  message("Konfiguration auf Windows")
else()
  message("Konfiguration auf ${CMAKE_HOST_SYSTEM_NAME}")
endif()
