cmake_minimum_required(VERSION 3.7)

project(code_6-1 
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(build_test main.cpp)

message("ENV Flags: " $ENV{CXXFLAGS})
message("Standard Flags: " ${CMAKE_CXX_FLAGS})
message("Debug Flags: " ${CMAKE_CXX_FLAGS_DEBUG})
message("Release Flags: " ${CMAKE_CXX_FLAGS_RELEASE})
message("MinSizeRel Flags: " ${CMAKE_CXX_FLAGS_MINSIZEREL})
message("RelWithDebInfo Flags: " ${CMAKE_CXX_FLAGS_RELWITHDEBINFO})


