function(erstelle_test TESTNAME)
    message("Anzahl Argumente ${ARGC}")
    message("Übergebene Argumente ${ARGV}")
    
    add_executable(${TESTNAME} ${ARGN})
    
    target_link_libraries(${TESTNAME} 
         PRIVATE mathe Catch2::Catch2
    )
    
    add_test(
        NAME ${TESTNAME}
        COMMAND ${TESTNAME}
    )
endfunction()

cmake_minimum_required(VERSION 3.7)

project(code_4-6 
    	LANGUAGES CXX
)

include(CTest)

add_subdirectory(libs/Catch2)    
add_library(mathe src/mathe.cpp)

erstelle_test(test_addieren src/addieren.cpp)
erstelle_test(test_geometrie 
    src/rechteck_flaeche.cpp 
    src/rechteck_umfang.cpp
)
