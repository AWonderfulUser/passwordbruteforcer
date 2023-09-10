# Minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Project name and description
project(passwordBruteforcer CXX)

# Add source files
add_executable(passwordBruteforcer src/main.cpp)

# Set C++ standard (optional)
target_compile_features(passwordBruteforcer PRIVATE cxx_std_11)

target_include_directories(passwordBruteforcer PRIVATE include/)