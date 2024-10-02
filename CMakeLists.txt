cmake_minimum_required(VERSION 3.10)

# Set the project name and the languages used by project
project(BasicProject C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

set(INCLUDE_DIRS
    inc
)

set(SOURCE_FILES
    main.c
    src/example.c
)

add_executable(example.out ${SOURCE_FILES})

target_include_directories(example.out PUBLIC ${INCLUDE_DIRS})
