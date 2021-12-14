cmake_minimum_required(VERSION 3.14...3.19)

project(code_10-5 LANGUAGES CXX)

include(CTest)

add_library(mathe STATIC src/mathe.cpp) 
    
target_include_directories(mathe PUBLIC include)
    
if(${BUILD_TESTING})
  add_subdirectory(libs/Catch2)

  add_executable(addieren test/tst_addieren.cpp)

  target_link_libraries(
    addieren
    PRIVATE
      mathe
      Catch2::Catch2
    ) 
      
  list(
    APPEND 
    CMAKE_MODULE_PATH 
      ${CMAKE_CURRENT_SOURCE_DIR}/libs/Catch2/contrib
    )
  include(Catch)
  catch_discover_tests(addieren)
endif()
