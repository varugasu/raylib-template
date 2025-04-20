cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 20)

project(RaylibTemplate)

# Include directories for header files
include_directories(include)

link_directories(${CMAKE_SOURCE_DIR}/vendor/glfw/lib)
link_directories(${CMAKE_SOURCE_DIR}/vendor/raylib/lib)

# Add source files
add_executable(RaylibTemplate
    src/main.cpp
)

# Link libraries
target_link_libraries(RaylibTemplate libglfw.3.a libraylib.a)
