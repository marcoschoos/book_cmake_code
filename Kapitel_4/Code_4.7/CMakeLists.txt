function(erstelle_test)

    message("Anzahl Argumente ${ARGC}")
    message("Übergebene Argumente ${ARGV}")

    set(PRAEFIX ARG)
    set(BOOLS CHECK)
    set(EINFACHE_WERTE TESTNAME)
    set(MULTI_WERTE SOURCES LIBS)

    #include(CMakeParseArguments)
    cmake_parse_arguments(${PRAEFIX}
			  "${BOOLS}"
	  		  "${EINFACHE_WERTE}"
			  "${MULTI_WERTE}"
			  ${ARGN})

    add_executable(${ARG_TESTNAME} 
	${ARG_SOURCES})
    
    target_link_libraries(${ARG_TESTNAME} 
         PRIVATE ${ARG_LIBS} Catch2::Catch2
    )
    
    add_test(
        NAME ${ARG_TESTNAME}
        COMMAND ${ARG_TESTNAME}
    )
    
    message("CHECK ist: ${ARG_CHECK}")
endfunction()

cmake_minimum_required(VERSION 3.7...3.22)

project(code_4-7
    	LANGUAGES CXX
)

include(CTest)

add_subdirectory(libs/Catch2)    
add_library(mathe src/mathe.cpp)

erstelle_test(
    TESTNAME test_addieren 
    SOURCES src/addieren.cpp 
    LIBS mathe
)
erstelle_test(
    LIBS mathe
    TESTNAME test_geometrie 
    SOURCES src/rechteck_flaeche.cpp 
            src/rechteck_umfang.cpp
    CHECK
)
