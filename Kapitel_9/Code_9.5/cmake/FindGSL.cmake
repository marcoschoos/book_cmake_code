find_path(GSL_INCLUDE_DIRS 
    gsl/gsl 
    PATHS
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/GSL/include
    NO_DEFAULT_PATH
    )
mark_as_advanced(GSL_INCLUDE_DIRS)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GSL
    REQUIRED_VARS GSL_INCLUDE_DIRS
    )

if(GSL_FOUND AND NOT TARGET Microsoft.GSL::GSL)
    add_library(Microsoft.GSL::GSL INTERFACE IMPORTED)
    target_include_directories(Microsoft.GSL::GSL 
         INTERFACE ${GSL_INCLUDE_DIRS}
         )
endif()
