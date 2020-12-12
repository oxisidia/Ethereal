# CMakeList.txt : CMake project for Ethereal, include source and define
# project specific logic here.

cmake_minimum_required(VERSION  3.15)
project(Ethereal)
 #include(GenerateExportHeader) we may not need this.

 #Specify the C++ standard

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#create add_library
add_library(Ethereal STATIC Ethereal.cpp)

#add include directories
target_include_directories(Ethereal
						   PUBLIC
						   "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
						   "$<INSTALL_INTERFACE:include>")

#Install the target and create export-set
install(TARGETS Ethereal
	    EXPORT EtherealTargets
		LIBRARY DESTINATION lib
		ARCHIVE DESTINATION lib
		RUNTIME DESTINATION bin
		INCLUDES DESTINATION include)

#Install header file
install(FILES Ethereal.h DESTINATION include)

# install header file
install(EXPORT EtherealTargets
	    FILE EtherealTargets.cmake
		NAMESPACE Test::
		DESTINATION lib/cmake)

# include CMakePackageConfigHelpers macro
include(CMakePackageConfigHelpers)

#Set version
set(version 0.0.1)

set_property(TARGET Ethereal PROPERTY VERSION ${version})

set_property(TARGET Ethereal PROPERTY SOVERSION 0)

set_property(TARGET Ethereal PROPERTY INTERFACE_Ethereal_MAJOR_VERSION 0)

set_property(TARGET Ethereal APPEND PROPERTY 

COMPATIBLE_INTERFACE_STRING Ethereal_MAJOR_VERSION)

#Generate the version file for the config file
write_basic_package_version_file("${CMAKE_CURRENT_BINARY_DIR}/EtheralConfigVersion.cmake"

VERSION "${version}"

COMPATIBILITY AnyNewerVersion)

#Create config file
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
"${CMAKE_CURRENT_BINARY_DIR}/EtherealConfig.cmake"
INSTALL_DESTINATION lib/cmake)

#Install config files
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/EtherealConfig.cmake"
			  "${CMAKE_CURRENT_BINARY_DIR}/EtheralConfigVersion.cmake"
				DESTINATION lib/cmake)

#Generate the export targets for the build tree
export(EXPORT EtherealTargets
	   FILE "${CMAKE_CURRENT_BINARY_DIR}/cmake/EtheralTargets.cmake"
	   NAMESPACE Test::)