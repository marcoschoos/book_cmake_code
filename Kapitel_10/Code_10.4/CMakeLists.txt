cmake_minimum_required(VERSION 3.14)

project(code_10-4
    	LANGUAGES CXX
)

include(CTest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mathe 
    STATIC src/mathe.cpp
    ) 
    
target_include_directories(mathe 
    PUBLIC include
    )
    
if(${BUILD_TESTING})
  add_subdirectory(libs/googletest)

  add_executable(test_addieren test/tst_addieren.cpp)

  target_link_libraries(test_addieren
      PRIVATE
          mathe
          gtest_main)

  if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
      target_compile_options(mathe
          PRIVATE -MTd)
      target_compile_options(test_addieren
          PRIVATE -MTd)
  endif()
  
  include(GoogleTest)
  gtest_discover_tests(test_addieren)
endif()

