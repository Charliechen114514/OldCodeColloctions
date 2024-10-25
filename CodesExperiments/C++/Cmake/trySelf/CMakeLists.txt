cmake_minimum_required(VERSION 3.20.0)
project(myMath VERSION 1.0)

file(GLOB_RECURSE prjsrc ./src/*.cpp)

add_executable(myMath target.cpp)
add_library(myMathLib ${prjsrc})
configure_file(targetlib.h.in ./targetlib.h)

target_link_libraries(myMath PUBLIC myMathLib)

target_include_directories(myMath PUBLIC 
                            ./include 
                            ${PROJECT_BINARY_DIR})



