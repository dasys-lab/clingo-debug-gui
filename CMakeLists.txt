cmake_minimum_required(VERSION 3.0)
project(ClingoDebugGui)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARTGETS)


else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

include_directories(
    include ${CONAN_INCLUDE_DIRS}
)

### Main File ###
add_executable(${CMAKE_PROJECT_NAME}
    src/main.cpp
    src/MainWindow.cpp
    src/AFrame.cpp
    src/GraphPane.cpp
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    ${CONAN_LIBS}
)
