add_test( blaTest.test1 [==[Q:/Ethereal/out/build/x64-Debug (default)/Tests/TEST_EXE.exe]==] [==[--gtest_filter=blaTest.test1]==] --gtest_also_run_disabled_tests)
set_tests_properties( blaTest.test1 PROPERTIES WORKING_DIRECTORY [==[Q:/Ethereal/out/build/x64-Debug (default)/Tests]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( TEST_EXE_TESTS blaTest.test1)
