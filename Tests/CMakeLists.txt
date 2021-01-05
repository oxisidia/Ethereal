message("-- Building Tests")

set(This PointTests)

#set(BINARY ${CMAKE_PROJECT_NAME}Tests)

#file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES test.cpp)

add_executable(${This} "main.cpp" "test.cpp")

#Find the google test package.
#find_package(GTest)

target_link_libraries(${This} PUBLIC Ethereal::ethereal gtest_main)

add_test(

	NAME ${This}
	
	COMMAND ${This}
)