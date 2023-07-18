cmake_minimum_required(VERSION 3.10)

project(Sample_02)

set(CMAKE_C_COMPILER "gcc-11.3.0")
set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(CMAKE_INSTALL_INCLUDE_DIR "${CMAKE_INSTALL_PREFIX}/include")
set(CMAKE_INSTALL_BIN_DIR "${CMAKE_INSTALL_PREFIX}/bin")
set(CMAKE_INSTALL_LIB_DIR "${CMAKE_INSTALL_PREFIX}/lib")

include_directories(./include)

option(CMAKE_BUILD_STATIC_LIB "Build static library" ON)

if(CMAKE_BUILD_STATIC_LIB)
    add_library(Sample_02 STATIC src/employee.cpp)
else()
    add_library(Sample_02 SHARED src/employee.cpp)
endif()

install(TARGETS Sample_02 DESTINATION ${CMAKE_INSTALL_LIB_DIR})
install(DIRECTORY ./include 
        DESTINATION ${CMAKE_INSTALL_INCLUDE_DIR}   
        FILES_MATCHING PATTERN "*.h"
)