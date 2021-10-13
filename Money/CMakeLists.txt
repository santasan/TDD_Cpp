#minimum version
cmake_minimum_required(VERSION 3.10)

#project name
project(Moneytest)

# find library
find_package(GTest)

enable_testing()

add_executable(
    MoneyTest
    MoneyTest.cpp
    Dollar.cpp
    Dollar.hpp
)
    
target_link_libraries(
    MoneyTest
    gtest_main
    gtest
    pthread
)

include(GoogleTest)
gtest_discover_tests(MoneyTest)