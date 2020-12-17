# CMakeList.txt : CMake project for SimplePointExample
#

#Specify cmake minimum 
cmake_minimum_required (VERSION 3.15)

#Specify c++ standard 
Set(CMAKE_CXX_STANDARD 17)

#Specify project name.
project (SimplePointExample)

#Find the Etheral library--------------------------------------->>>

get_filename_component(Examples ${PROJECT_SOURCE_DIR} DIRECTORY)

get_filename_component(EtherealBase ${Examples} DIRECTORY)

#--------------------------------------------------------------->>>

#Create the executable
add_executable(SimplePointExample SimplePointExample.cpp)

#Target the link libraries we need for compilation
target_link_libraries(SimplePointExample "${EtherealBase}\\out\\build\\x64-Debug (default)\\Ethereal.lib")

#Install the targets 
install(TARGETS SimplePointExample DESTINATION bin)