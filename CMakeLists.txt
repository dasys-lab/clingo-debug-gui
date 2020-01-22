cmake_minimum_required(VERSION 3.0)
project(ClingoDebugGui)

set(wxWidgets_ROOT_DIR </usr/include/wx-3.0>)

find_package(wxWidgets
    COMPONENTS core base
    REQUIRED
)



set(wxWidgets_CONFIGURATION gtk2-unicode-3.1)

include_directories(
    include
    ${wxWidgets_INCLUDE_DIRS}
    ${wxWidgets_USE_FILE}
)

### Main File ###
add_executable(${CMAKE_PROJECT_NAME}
    src/main.cpp
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    ${wxWidgets_LIBRARIES}
)
