# CMakeList.txt : CMake project for Ethereal, include source and define
# project specific logic here.

cmake_minimum_required(VERSION  3.15)
project(Ethereal)

 #Specify the C++ standard

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Add the library 
add_library(Ethereal SHARED Ethereal.cpp)

#Create the install targets and files.
install(TARGETS Ethereal DESTINATION lib)
install(FILES Ethereal.h DESTINATION include)