# CMakeList.txt : CMake project for SimplePointExample

message("-- Building Simple Point Example")

add_executable(SimplePointExample SimplePointExample.cpp) #Add the executable

#set(${Eigen3_DIR} ../../Libraries/eigen-3.3.9/cmake)

#find_package(Eigen3 3.3 REQUIRED PATHS ../../Libraires/eigen-3.3.9/cmake)

target_link_libraries(SimplePointExample PRIVATE Ethereal::ethereal)

install(TARGETS SimplePointExample RUNTIME DESTINATION bin)