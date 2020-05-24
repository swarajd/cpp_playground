cmake_minimum_required(VERSION 3.10)
project(otherproj VERSION 0.1.0)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include(ClangFormat)

add_subdirectory(src)
add_subdirectory(test)