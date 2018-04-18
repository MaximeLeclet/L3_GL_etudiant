cmake_minimum_required( VERSION 2.6 )
project( fibo )
set( CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -DNDEBUG" )

add_executable( print_fibo.out
    src/Fibo.cpp
    src/print_fibo.cpp )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )
add_executable( main_test.out src/main_test.cpp src/fibo_test.cpp )
target_link_libraries( main_test.out ${PKG_LIBRARIES} )
