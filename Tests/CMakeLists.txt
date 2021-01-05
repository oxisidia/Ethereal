message("-- Building Tests")

set(This PointTests) #Set the name for the tests.

add_executable(${This}  "test.cpp") #Add the test executable.

#Target the required libraries------------------------------------->>>>

target_link_libraries(${This} PUBLIC Ethereal::ethereal gtest_main)

add_test(NAME ${This} COMMAND ${This})