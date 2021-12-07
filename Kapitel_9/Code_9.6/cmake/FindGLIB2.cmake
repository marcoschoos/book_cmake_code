find_package(PkgConfig)
pkg_check_modules(PKG_GLIB2 glib-2.0)

find_path(GLIB2_INCLUDE_DIR glib.h
          HINTS
             ${PKG_GLIB2_INCLUDEDIR}
             ${PKG_GLIB2_INCLUDE_DIRS})

find_path(GLIB2_INCLUDE_DIR_CONFIG glibconfig.h
          HINTS
             ${PKG_GLIB2_INCLUDEDIR}
             ${PKG_GLIB2_INCLUDE_DIRS})

find_library(GLIB2_LIBRARY NAMES glib-2.0
             HINTS
                ${PKG_GLIB2_LIBDIR}
                ${PKG_GLIB2_LIBRARY_DIRS} )

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GLIB2
    REQUIRED_VARS
        GLIB2_INCLUDE_DIR
        GLIB2_INCLUDE_DIR_CONFIG
        GLIB2_LIBRARY)

set(GLIB2_INCLUDE_DIRS
    ${GLIB2_INCLUDE_DIR} ${GLIB2_INCLUDE_DIR_CONFIG})
set(GLIB2_LIBRARIES ${GLIB2_LIBRARY})

mark_as_advanced(GLIB2_INCLUDE_DIRS GLIB2_LIBRARIES)

if(GLIB2_FOUND AND NOT TARGET GLIB2::GLIB2)
    add_library(GLIB2::GLIB2 INTERFACE IMPORTED)
    target_include_directories(GLIB2::GLIB2
         INTERFACE ${GLIB2_INCLUDE_DIRS}
         )
    target_link_libraries(GLIB2::GLIB2
         INTERFACE ${GLIB2_LIBRARIES}
         )
endif()
