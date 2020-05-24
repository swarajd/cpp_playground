cmake_minimum_required(VERSION 3.10)
project(otherproj VERSION 0.1.0)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include(ClangFormat)
include(CodeCoverage)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

append_coverage_compiler_flags()

enable_testing()

add_subdirectory(src)
add_subdirectory(test)

setup_target_for_coverage_gcovr_html(
          NAME coverage
          EXECUTABLE test/unit_tests
          BASE_DIRECTORY "${PROJECT_SOURCE_DIR}/src"
          )
