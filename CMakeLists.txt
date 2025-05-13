cmake_minimum_required(VERSION 3.10)
project(minicfg)  # Your library name

# Set C++ standard (adjust if needed)
set(CMAKE_CXX_STANDARD 11)

# Create the library (static by default)
add_library(minicfg "src/minicfg.cc" "src/minicfg.h")

# Make headers available to users
target_include_directories(minicfg PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})