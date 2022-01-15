cmake_minimum_required(VERSION 3.7...3.22)

project(code_10-1 LANGUAGES CXX)

include(CTest)

add_library(mathe STATIC src/mathe.cpp) 
    
target_include_directories(mathe PUBLIC include)
    
if(${BUILD_TESTING})
  add_executable(addieren test/tst_addieren.cpp)

  target_link_libraries(addieren PRIVATE mathe)
  
  add_test(
    NAME addieren_test
    COMMAND addieren
    )
endif()
