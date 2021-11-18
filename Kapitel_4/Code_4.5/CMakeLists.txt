cmake_minimum_required(VERSION 3.7)

project(code_4-5 
    LANGUAGES CXX
    )

add_executable(hello_world main.cpp)

macro(ausgeben AUSGABE)
    set(FUNC_VAR 2)
    
    message("In Funktion AUSGABE: " ${AUSGABE})
    message("In Funktion FUNC_VAR: " ${FUNC_VAR})
    message("In Funktion TEST_VAR: " ${TEST_VAR} "\n")
endmacro()

set(ARGUMENT 0)

message("Vor Funktion ARGUMENT: " ${ARGUMENT})
message("Vor Funktion FUNC_VAR: " ${FUNC_VAR})
message("Vor Funktion TEST_VAR: " ${TEST_VAR} "\n")

ausgeben(${ARGUMENT})

set(TEST_VAR 3)

message("Nach Funktion ARGUMENT: " ${ARGUMENT})
message("Nach Funktion FUNC_VAR: " ${FUNC_VAR})
message("Nach Funktion TEST_VAR: " ${TEST_VAR} "\n")

ausgeben(${TEST_VAR})
