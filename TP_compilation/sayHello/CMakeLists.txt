cmake_minimum_required( VERSION 3.0)
project( sayHello )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

add_executable( sayHelloo module1.cpp sayHello.cpp )
