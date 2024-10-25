
if(${CMAKE_VERSION} VERSION_LESS 3.24)
    cmake_minimum_required(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
    message(STATUS "version less 3.24, switch to ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}")
else()
    cmake_minimum_required(VERSION 3.24)
    message(STATUS "version is good, no need to switch")
endif()

project(Hello 
        VERSION 1.0
        DESCRIPTION "A demo for Abs factory")

message(
    STATUS 
    "Ready to config the project:> ${PROJECT_NAME}\n
     The Project Version is ${PROJECT_VERSION}\n
     Project descriptions are follows:> ${PROJECT_DESCRIPTION}\n
     Build start\n\n\n"
)


message("will set the project source dir in:> ${PROJECT_SOURCE_DIR}\n")
include_directories(${PROJECT_SOURCE_DIR})

file(
    GLOB_RECURSE mySource    
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)

message("Find Sources:> ${mySource}")
add_executable(exe ${mySource})


