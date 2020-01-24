cmake_minimum_required(VERSION 3.0)
project(ClingoDebugGui)

find_package(wxWidgets
    COMPONENTS core base
    REQUIRED
)

include(${wxWidgets_USE_FILE})


include_directories(
    include
#    ${wxWidgets_USE_FILE}
)

message(- ${wxWidgets_USE_FILE})

### Main File ###
add_executable(${CMAKE_PROJECT_NAME}
        src/MyApp.cpp
        include/MyApp.h src/main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME}
    ${wxWidgets_LIBRARIES}
)
