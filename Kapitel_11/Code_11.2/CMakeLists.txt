cmake_minimum_required(VERSION 3.9...3.19)

project(code_11-2 LANGUAGES CXX)

add_library(mathe SHARED src/mathe.cpp) 
target_include_directories(mathe PUBLIC include)

set(
  RUN_CLANG_TIDY 
  TRUE 
  CACHE 
  BOOL 
  "Runs clang-tidy when build."
  )

if(${RUN_CLANG_TIDY})
  find_program(
    CLANG_TIDY_EXE "clang-tidy"
  )
  if(CLANG_TIDY_EXE)
    set_target_properties(
      mathe
      PROPERTIES
        CXX_CLANG_TIDY "${CLANG_TIDY_EXE};-checks=*"
      )
    endif()
endif()
