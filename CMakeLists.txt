# Cmake files should be treated like code and documented andkept readable.

# The range of versions instructs cmake to use the newest available standard with minimum 3.0.
# This should not cause any problems
cmake_minimum_required(VERSION 3.0...3.16)

# This construct should prevent bugs or problems on MacOS
if(${CMAKE_VERSION} VERSION_LESS 3.15)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.15)
endif()

project(ClingoDebugGui
    VERSION 0.1 
    LANGUAGES CXX
    DESCRIPTION "A graphical debugger for clingo asp programs using wxWidgets."
)

# This information is from conan documentation.
if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARTGETS)
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

# This might be accompanied by per target include directories if the project gets more complex
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
# If there are includes that only this target needs they can be placed here
# target_include_directories(${CMAKE_PROJECT_NAME} "")
target_link_libraries(${CMAKE_PROJECT_NAME}
    ${CONAN_LIBS} # I want this to be less opaque and more specific. TODO: read the documentation of conan
)
