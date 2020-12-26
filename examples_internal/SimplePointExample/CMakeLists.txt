# CMakeList.txt : CMake project for SimplePointExample

message("-- Building Simple Point Example")

add_executable(SimplePointExample SimplePointExample.cpp) #Add the executable

target_link_libraries(SimplePointExample PRIVATE Ethereal::ethereal)

install(TARGETS SimplePointExample RUNTIME DESTINATION bin)