cmake_minimum_required(VERSION 3.17...3.22)

project(code_4-8 LANGUAGES CXX)

add_executable(hello_world main.cpp)

message(
  "Build-Konfigurationen: ${CMAKE_CONFIGURATION_TYPES}"
  )

set(
  BUILD_KONFIG 
    $<IF:$<CONFIG:Debug>,Debug,$<IF:$<CONFIG:Release>,Release,RelWithDebInfo>>
  )

file(
  GENERATE 
  OUTPUT ${BUILD_KONFIG}_Datei 
  CONTENT 
    "$<CONFIG:Debug> $<CONFIG:Release> $<CONFIG:RelWithDebInfo> \n"
  )
 
add_custom_target(
  genexdebug 
  COMMAND 
    ${CMAKE_COMMAND} -E echo 
    "$<CONFIG:Debug> $<CONFIG:Release> $<CONFIG:RelWithDebInfo>"
  )
