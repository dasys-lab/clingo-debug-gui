cmake_minimum_required(VERSION 3.0)
project(ClingoDebugGui)

set(CMAKE_BUILD_TYPE Debug)
set(BUILD_THREADS 4) # How many threads should be used t make the project
set(CMAKE_BUILD_PARALLEL_LEVEL ${BUILD_THREADS})

include_directories(
    include
)

set(CMAKE_GENERATOR Ninja)

add_subdirectory(libs/wxWidgets EXCLUDE_FROM_ALL) # EXCLUDE_FROM_ALL does not include targets nothing depends on into the 'all' target

### Main File ###
add_executable(${CMAKE_PROJECT_NAME}
    src/main.cpp
    src/MainWindow.cpp
    src/AFrame.cpp
    src/GraphPane.cpp
)
target_link_libraries(${CMAKE_PROJECT_NAME} # Components that are listed here will be built.
    core
    base
)
