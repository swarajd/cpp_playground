add_executable(unit_tests test.cpp)

target_link_libraries(unit_tests gtest gtest_main rt pthread add)

add_test(test_all unit_tests)