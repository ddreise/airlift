cmake_minimum_required(VERSION 3.12)

# Pull in the SDK
include(../pico-sdk/external/pico_sdk_import.cmake)

project(airlift C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Set airlift as project source directory
set(PICO_AIRLIFT_PATH ${PROJECT_SOURCE_DIR})

# Initialize the SDK
pico_sdk_init()

add_subdirectory(src)

