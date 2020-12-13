# CMakeList.txt : CMake project for SimplePointExample
#

#Specify cmake minimum 
cmake_minimum_required (VERSION 3.15)

#Specify c++ standard 
Set(CMAKE_CXX_STANDARD 17)

#Specify project name.
project (SimplePointExample)

#Find the Etheral library--------------------------------------->>>

#First get the examples parent directory 
get_filename_component(Examples ${PROJECT_SOURCE_DIR} DIRECTORY)

#Then get the Ethereal directory
get_filename_component(Ethereal ${Examples} DIRECTORY)

#Now add the Ethereal library.
add_subdirectory(Ethereal)

#--------------------------------------------------------------->>>

#Create the executable
add_executable(SimplePointExample SimplePointExample.cpp)

#Target the link libraries we need for compilation
target_link_libraries(SimplePointExample Ethereal)

#Install the targets 
install(TARGETS SimplePointExample DESTINATION bin)