add_library(add add/add.h add/add.cpp)

target_include_directories(
    add
    PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

add_executable(testproj main.cpp)

target_link_libraries(testproj add)

