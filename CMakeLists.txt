# CMakeList.txt : CMake project for Ethereal, include source and define
# project specific logic here.

cmake_minimum_required(VERSION  3.15)

project(Ethereal VERSION 0.0.1)

# Set environment variables
include(${PROJECT_SOURCE_DIR}/cmake/SetEnv.cmake)

# Library sources
add_subdirectory(${LIBRARY_FOLDER})

# Library examples
add_subdirectory(examples_internal)