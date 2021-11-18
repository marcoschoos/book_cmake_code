cmake_minimum_required(VERSION 3.7)

project(code_10-2
    	LANGUAGES CXX
)

include(CTest)

add_library(mathe 
    STATIC src/mathe.cpp
    ) 
    
target_include_directories(mathe 
    PUBLIC include
    )
    
if(${BUILD_TESTING})
  add_executable(addieren test/tst_addieren.cpp)

  target_link_libraries(addieren
      PRIVATE mathe)
  
  add_test(NAME addieren_test_pass
           COMMAND addieren)
  set_tests_properties(addieren_test_pass
      PROPERTIES
      PASS_REGULAR_EXPRESSION "erfolgreich")

  add_test(NAME addieren_test_fail
           COMMAND addieren)
  set_tests_properties(addieren_test_fail
      PROPERTIES
      FAIL_REGULAR_EXPRESSION "erfolgreich")

  add_test(NAME addieren_test_skip
           COMMAND addieren)
  set_tests_properties(addieren_test_skip
      PROPERTIES
      SKIP_RETURN_CODE 0)
endif()

