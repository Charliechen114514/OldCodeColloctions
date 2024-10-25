project(Module1)
set(CMAKE_CXX_STANDARD 17)
add_library(
    Module1
    Module1.hpp 
    PublicAPI.hpp 
)

add_executable(test.cpp)