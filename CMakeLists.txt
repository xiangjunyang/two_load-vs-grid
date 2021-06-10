cmake_minimum_required(VERSION 3.10)

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
message(FATAL_ERROR "\nFATAL: In-source builds are not allowed.\n"
    "You should create a separate directory for build files."
    )
endif()

 # Set variables
 set(PROJECT_NAME twoload_vs_grid)
 set(PROJECT_LANGUAGE C CXX)

# set the project name
project(CmakeTest)
include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)


# include dirs
include_directories(
    include
    ${LIBMYSQLCLIENT_INCLUDE_DIRS}
    ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
    # ${GLPK_INCLUDE_DIRS}
    /home/hems/glpk-4.65-built/src
)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

# add the executable
add_executable(two_load_vs_grid src/two_load_vs_grid.cpp src/SQLFunction.cpp )
target_link_libraries(two_load_vs_grid 
    ${LIBMYSQLCLIENT_LIBRARIES} 
    /home/hems/glpk-4.65-built/src/.libs/libglpk.a
)
