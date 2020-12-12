# CMakeList.txt : CMake project for SimplePointExample, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.17)

Set(CMAKE_CXX_STANDARD 17)

project ("SimplePointExample")

# Add source to this project's executable.
add_executable (SimplePointExample "SimplePointExample.cpp" "SimplePointExample.h")

# Find the Etheral library.

#add_library(Ethereal Ethereal_Lib SHARED IMPORTED)
#set_property(TARGET t IMPORTED_LOCATION "q:\\Ethereal\\out\\build\\x64-Debug (default)\\Ethereal.dll" )

#find_library (Ethereal Ethereal_Lib  ${SOURCE_DIR}\\Ethereal Q:\\Ethereal\\out\\build\\x64-Debug (default))

#if (${Ethereal_Lib} STREQUAL Ethereal_Lib-NOTFOUND)

#message("Ethereal was not found!")

#else()

#message(STATUS "Ethereal Found")

#endif()

#target_link_libraries(SimplePointExample PUBLIC Ethereal_Lib)