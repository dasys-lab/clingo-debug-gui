
# This CMakeLists.txt trys to follow best practices taken from:
# https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1
# and
# https://cliutils.gitlab.io/modern-cmake/
# I try to comment and explain everything so I can follow my own thoughts at a later point.
# I will treat this CMakeLists.txt file and all cmake scripts I have to write for this project as code.

cmake_minimum_required(         # This directive sets the Version of cmake that is used.
                                # Cmake is backward compatible to a point that you can't use features that are newer than
                                # the version specified in this statement.
                                # This directive can not be omitted!
                                # It is documented at:
                                # https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html
    VERSION 3.0...3.15          # This Parameter baiscally inshures that cmake uses the newest version possible
                                # but at least uses version 3.0. 3.15 is the newest cmake version shipped with Cliion
                                # by default on Linux.
    FATAL_ERROR                 # This enshures that cmake does not proceed if you have a version older than this.
                                # This should be the default but I wanted to make shure it is enforced
)

project(ClingoDebugGui                                              # This directive sets some project information.
                                                                    # This directive can not be omitted!
                                                                    # Further documentation can be found here:
                                                                    # https://cmake.org/cmake/help/v3.15/command/project.html
    VERSION 0.1                                                     # This tells cmake the version of the project.
    DESCRIPTION "A ui to debug asp scripts using clingo."           # only included for completenes sake.
                                                                    # Can be removed safely if unwanted!
    LANGUAGES CXX                                                   # This is for information
)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})   # This directive adds the cmake directory of
                                                                            # this project to the cmake search path.

## Conan setup ##
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)


add_executable(${CMAKE_PROJECT_NAME}
    src/appmain.cpp
    src/MainWindow.cpp
    src/MainFrame.cpp
)
target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE include
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    CONAN_PKG::wxwidgets
)