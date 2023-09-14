# Works with 3.14 and tested through 3.27
cmake_minimum_required(VERSION 3.14...3.27)

set(CMAKE_C_COMPILER /home/linuxbrew/.linuxbrew/bin/gcc-13)
set(CMAKE_CXX_COMPILER /home/linuxbrew/.linuxbrew/bin/g++-13)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wpedantic")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")


# Project name and a few useful settings. Other commands can pick up the results
project(
  first-project
  VERSION 0.1
  DESCRIPTION "This is the #1 projct of the course"
  LANGUAGES CXX)

add_executable(first-project.o main.cpp)  # Create an executable named "MyProject" from the source file "main.cpp"