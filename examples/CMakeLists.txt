cmake_minimum_required (VERSION 3.15)

#Specify c++ standard 
Set(CMAKE_CXX_STANDARD 17)

#Specify project name.
project (Examples)

#Notify that examples are being built.
message("Building examples----------------------------------->>>")

#Build each example subdirectory
add_subdirectory(${PROJECT_SOURCE_DIR}/SimplePointExample)

#Notify that examples have finished building.
message("Examples built-------------------------------------->>>")