cmake_minimum_required(VERSION 3.20.0)
project(Tutorial VERSION 1.1)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(Tutorial_Date 20231014)

option(USE_PRINTLIBS "use the printlibs of our own" ON)



file(GLOB_RECURSE srccpp libsrc/*.cpp)

add_library(PrintLibs ${srccpp})
if(USE_PRINTLIBS)
    target_compile_definitions(PrintLibs PRIVATE "USE_PRINTLIBS")
endif
add_executable(Tutorial Tutorials.cpp)
target_link_libraries(Tutorial PUBLIC PrintLibs)
target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/include"
                          )



configure_file(TutorialConfig.h.in TutorialConfig.h)

target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")