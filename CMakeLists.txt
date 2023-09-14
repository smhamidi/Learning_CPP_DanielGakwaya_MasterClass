# Specify the minimum required version of CMake for this project. 
# This project is compatible with CMake versions from 3.14 to 3.27.
cmake_minimum_required(VERSION 3.14...3.27)

# Set the C and C++ compilers to be used for this project.
# Here, specific versions of GCC and G++ are chosen.
set(CMAKE_C_COMPILER /home/linuxbrew/.linuxbrew/bin/gcc-13)
set(CMAKE_CXX_COMPILER /home/linuxbrew/.linuxbrew/bin/g++-13)

# Set the C++ standard to C++23 and make it a required standard.
# If the compiler does not support C++23, CMake will produce an error.
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# If no build type is specified during the configuration, default to "Release".
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# Set compiler flags for C++.
# -Wall, -Wextra, -Werror, and -Wpedantic are used for stricter warnings and error handling.
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wpedantic")

# Set compiler flags specific to the Debug build type.
# -g enables debugging symbols.
set(CMAKE_CXX_FLAGS_DEBUG "-g")

# Set compiler flags specific to the Release build type.
# -O3 enables high-level optimizations.
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Define the project details such as name, version, description, and the primary language used.
project(
  first-project
  VERSION 0.1
  DESCRIPTION "This is the #1 projct of the course"
  LANGUAGES CXX)

# Add an executable target named "first-project.o" that will be built from the source file "main.cpp".
add_executable(first-project.o main.cpp)
