message("-- Building Tests")

set(BINARY ${CMAKE_PROJECT_NAME}Tests)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(TEST_EXE ${TEST_SOURCES} "main.cpp" "test.cpp")

#Find the google test package.
find_package(GTest)

target_link_libraries(TEST_EXE PUBLIC Ethereal::ethereal gtest)

enable_testing() #Enable testing of the Ethereal library.

gtest_discover_tests(TEST_EXE) #doesn't work yet.'