message("-- Building Tests")

set(This ExampleTests)

add_executable(${This} "test.cpp")

target_link_libraries(${This} PUBLIC Ethereal::ethereal gtest_main)

add_test(

	NAME ${This}

	COMMAND ${This}
)