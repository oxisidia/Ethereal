# CMakeList.txt : CMake project for Ethereal, include source and define
# project specific logic here.

#Specify the minimum cmake version required.
cmake_minimum_required(VERSION  3.15) 

#Declare a version number.
project(Ethereal VERSION 0.0.1)

enable_testing() #enable testing for this project.

#Set environment variables
include(${PROJECT_SOURCE_DIR}/cmake/SetEnv.cmake)

#Library sources
add_subdirectory(${LIBRARY_FOLDER})

#Library examples
add_subdirectory(examples_internal)

#Add GTest library sub.
add_subdirectory(Libraries/googletest)

#Add Tests subdirectory.
add_subdirectory(Tests)