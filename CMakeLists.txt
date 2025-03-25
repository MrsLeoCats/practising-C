cmake_minimum_required(VERSION 3.10)
project(practising-C C)

set(CMAKE_C_STANDARD 99)

# Include the "include" directory where munit.h is located
include_directories(${CMAKE_SOURCE_DIR}/include)

# Create main executable
add_executable(main src/main.c)

# Create unit test executable
add_executable(unit_tests src/test_main.c)
