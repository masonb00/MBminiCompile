cmake_minimum_required(VERSION 3.16)
project(clox LANGUAGES CXX)

# --- Language standard ---
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# --- Default build type ---
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# --- Warnings ---
add_compile_options(-Wall -Wextra)

# --- Source files ---
# As you add debug.cpp, value.cpp, memory.cpp, etc., list them here too.
set(SOURCES
    src/main.cpp
    src/chunk.cpp
    src/debug.cpp
)

add_executable(clox ${SOURCES})

# So `#include "chunk.h"` resolves regardless of which .cpp is being compiled
target_include_directories(clox PRIVATE src)
