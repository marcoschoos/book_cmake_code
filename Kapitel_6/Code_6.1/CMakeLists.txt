cmake_minimum_required(VERSION 3.5)

project(code_6-1 
    LANGUAGES CXX
)

add_executable(build_test main.cpp)

message("ENV Flags: " $ENV{CXXFLAGS})
message("Standard Flags: " ${CMAKE_CXX_FLAGS})
message("Debug Flags: " ${CMAKE_CXX_FLAGS_DEBUG})
message("Release Flags: " ${CMAKE_CXX_FLAGS_RELEASE})
message("MinSizeRel Flags: " ${CMAKE_CXX_FLAGS_MINSIZEREL})
message("RelWithDebInfo Flags: " ${CMAKE_CXX_FLAGS_RELWITHDEBINFO})


