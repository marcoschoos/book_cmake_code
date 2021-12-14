cmake_minimum_required(VERSION 3.14...3.19)

project(code_11-3 LANGUAGES CXX)

include(CTest)

add_library(mathe STATIC src/mathe.cpp) 
    
target_include_directories(mathe PUBLIC include)
    
if(${BUILD_TESTING})
  include(FetchContent)

  FetchContent_Declare(
    catch
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.13.7
    )

  FetchContent_MakeAvailable(catch)

  add_executable(addieren test/tst_addieren.cpp)

  target_link_libraries(
    addieren
    PRIVATE
      mathe
      Catch2::Catch2
    )

  list(
    APPEND 
      CMAKE_MODULE_PATH ${catch_SOURCE_DIR}/contrib}
    )
  include(Catch)
  catch_discover_tests(addieren)
endif()
