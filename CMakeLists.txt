cmake_minimum_required(VERSION 3.11)
project(APOO)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES
    src/*.cpp
)

set(SOURCE_FILES main.cpp)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES} ${SOURCES})

target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE
    include/
)
