# CMakeList.txt : CMake project for SimplePointExample, include source and define
# project specific logic here.
#

#Specify cmake minimum 
cmake_minimum_required (VERSION 3.15)

#Specify c++ standard 
Set(CMAKE_CXX_STANDARD 17)

#Specify project name.
project (SimplePointExample)

#Find the Etheral library.
add_subdirectory(Ethereal)

#Create the executable
add_executable(SimplePointExample SimplePointExample.cpp)

#Target the link libraries we need for compilation
target_link_libraries(SimplePointExample Ethereal)

#Install the targets 
install(TARGETS SimplePointExample DESTINATION bin)