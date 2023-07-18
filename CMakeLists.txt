cmake_minimum_required(VERSION 3.10)

project(Sample_02)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(./include)

option(SAMPLE_02_STATIC_LIB "Build static library" ON)

if(SAMPLE_02_STATIC_LIB)
    add_library(Sample_02 STATIC src/employee.cpp)
else()
    add_library(Sample_02 SHARED src/employee.cpp)
endif()