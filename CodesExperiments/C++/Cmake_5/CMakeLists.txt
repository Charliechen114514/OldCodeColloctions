# Blocks are used to ensure the cmake version
if(${CMAKE_VERSION} VERSION_LESS 3.24)
    cmake_minimum_required(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
    message(STATUS "version less 3.24, switch to ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}")
else()
    cmake_minimum_required(VERSION 3.24)
    message(STATUS "version is good, no need to switch")
endif()
# Block End

project(First_CMake_Project
	VERSION 1.0
        DESCRIPTION "A demo for using imported libraries")

# SET THIS AS DEBUG MODE, for I need DEBUG lol        
SET(CMAKE_BUILD_TYPE "Debug")
# If you have some strange issues including unable to find {PackageName}Config.cmake,
# You first need to ensure the exsitance of the .cmake, if have, set the path as fallows
# Or, to config the ldPath to ensure the libs are accessible(I was in this situations lol)
# set(CMAKE_PREFIX_PATH path/to/your/opencvConfig.CMakeDIR)
# set(Opencv_DIR path/to/your/opencvConfig.CMakeDIR)

# if using apt, then use in this way
find_package(PkgConfig)
pkg_check_modules(OPENCV IMPORTED_TARGET opencv)
if(NOT OPENCV_FOUND)
message(STATUS "Package-config can not find opencv*.pc, if you wanna find by pkg-config, move opencv*.pc to the findable path! usr/share/pkgConfig")
find_package(OpenCV REQUIRED)
endif()

# Blocks are used in shown the Opencv Config message
message("Opencv targeted!")
message(STATUS "Opencv Related Message is on the below\n\n\n")
message(STATUS "OpenCV_DIR = ${OpenCV_DIR}")
message(STATUS "OpenCV_INCLUDE_DIRS = ${OpenCV_INCLUDE_DIRS}")
message(STATUS "OpenCV_LIBS = ${OpenCV_LIBS}")
# Blocks End

set(Executable_Name "first_run_opencv")
# link the libs
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(${Executable_Name} TryOpencv.cpp)
target_link_libraries(${Executable_Name} ${OpenCV_LIBS})



