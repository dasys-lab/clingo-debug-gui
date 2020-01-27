cmake_minimum_required(VERSION 3.0)
project(ClingoDebugGui)

set(CMAKE_BUILD_TYPE Debug)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

find_package(wxWidgets
    COMPONENTS core base gl
    REQUIRED
)

include(${wxWidgets_USE_FILE})


include_directories(
    include
    ${OPENGL_INCLUDE_DIRS}
    ${GLUT_INCLUDE_DIRS}
)

### Main File ###
add_executable(${CMAKE_PROJECT_NAME}
    src/main.cpp
    src/MainWindow.cpp
    src/AFrame.cpp
    src/GraphPane.cpp
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    ${wxWidgets_LIBRARIES}
    ${OPENGL_LIBRARIES}
    ${GLUT_LIBRARY}
)
