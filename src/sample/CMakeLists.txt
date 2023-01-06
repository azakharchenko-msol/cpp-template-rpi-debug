
add_executable(
    example
    example.test.cpp
)
target_link_libraries(
    example
    GTest::gtest_main
)


gtest_discover_tests(example)