if(EXISTS "Q:/Ethereal/out/build/x64-Debug (default)/Tests/TEST_EXE[1]_tests.cmake")
  include("Q:/Ethereal/out/build/x64-Debug (default)/Tests/TEST_EXE[1]_tests.cmake")
else()
  add_test(TEST_EXE_NOT_BUILT TEST_EXE_NOT_BUILT)
endif()