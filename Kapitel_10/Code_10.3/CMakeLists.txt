cmake_minimum_required(VERSION 3.7...3.19)

project(code_10-3
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
  # Test test_addieren
  add_executable(addieren test/tst_addieren.cpp)
  target_link_libraries(addieren
      PRIVATE mathe)
  
  add_test(NAME test_addieren
           COMMAND addieren)
  set_tests_properties(test_addieren
      PROPERTIES LABELS "add")

  # Test test_addieren_advanced
  add_executable(addieren_advanced test/tst_addieren_advanced.cpp)
  target_link_libraries(addieren_advanced
      PRIVATE mathe)

  add_test(NAME test_addieren_advanced
           COMMAND addieren_advanced)
  set_tests_properties(test_addieren_advanced
      PROPERTIES LABELS "add;advanced")

  # Test test_subtrahieren
  add_executable(subtrahieren test/tst_subtrahieren.cpp)
  target_link_libraries(subtrahieren
      PRIVATE mathe)

  add_test(NAME test_subtrahieren
           COMMAND subtrahieren)
  set_tests_properties(test_subtrahieren
      PROPERTIES LABELS "sub")

  # Test test_subtrahieren_advanced
  add_executable(subtrahieren_advanced test/tst_subtrahieren_advanced.cpp)
  target_link_libraries(subtrahieren_advanced
      PRIVATE mathe)

  add_test(NAME test_subtrahieren_advanced
           COMMAND subtrahieren_advanced)
  set_tests_properties(test_subtrahieren_advanced
      PROPERTIES LABELS "sub;advanced")

  # Test test_addieren_subtrahieren
  add_executable(addieren_subtrahieren test/tst_addieren_subtrahieren.cpp)
  target_link_libraries(addieren_subtrahieren
      PRIVATE mathe)

  add_test(NAME test_addieren_subtrahieren
           COMMAND addieren_subtrahieren)
  set_tests_properties(test_addieren_subtrahieren
      PROPERTIES LABELS "add;sub")

  # Test test_multiplizieren
  add_executable(multiplizieren test/tst_multiplizieren.cpp)
  target_link_libraries(multiplizieren
      PRIVATE mathe)

  add_test(NAME test_multiplizieren
           COMMAND multiplizieren)
  set_tests_properties(test_multiplizieren
      PROPERTIES LABELS "mul")
endif()

