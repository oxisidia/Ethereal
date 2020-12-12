# CMakeList.txt : CMake project for Ethereal, include source and define
# project specific logic here.

cmake_minimum_required(VERSION  3.8)
project(Ethereal)
include(GenerateExportHeader)
set(CMAKE_CXX_STANDARD 17)

#Create a shared library for Ethereal.

add_library(Ethereal SHARED

Ethereal.cpp)

#Set target properties.

set_target_properties(Ethereal PROPERTIES PUBLIC_HEADER Ethereal.h COMPILE_FLAGS "" LINK_FLAGS "")

#Generate the export header

target_include_directories(Ethereal PUBLIC 

"$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
"$<INSTALL_INTERFACE:include>")

install(TARGETS Ethereal 

    LIBRARY DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(FILES ${CMAKE_BINARY_DIR}/Ethereal.pc 
    
    DESTINATION ${CMAKE_INSTALLDATAROOTDIR}/pkgconfig)

#GENERATE_EXPORT_HEADER(Ethereal
#    BASE_NAME Ethereal
#    EXPORT_MACRO_NAME PROJECT_NAME_EXPORT
#    EXPORT_FILE_NAME Ethereal.h
#    STATIC_DEFINE PROJECT_NAME_BUILT_AS_STATIC)

# Add source to this project's executable.
#add_executable ("Ethereal" "Ethereal.cpp" "Ethereal.h")

# TODO: Add tests and install targets if needed.
