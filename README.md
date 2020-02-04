# clingo-debug-gui

## Prerequisites
Before you start you should install the folloging tools on your system:
* git
* cmake
* a C++ compiler (gcc, mingw, visual-C++, xcode, ...)
* ninja 
* If building on linux, you should install gtk libraries.  

Instructions to install these tools should be easy to find.

## Installing this software
wxWidgets is included in this repository as a git submodule, so it does not have to be installed manually! We provide commands to clone via https and via ssh, you only need to execute one!
```bash
git clone --recurse-submodules http://www.github.com/dasys-lab/clingo-debug-gui.git # Clone via https
git clone --recurse-submodules git@github.com:dasys-lab/clingo-debug-gui.git # Clone via ssh
```
If you like you can adapt the cmake file so building uses more cores.
To build the project input the following commands one after the other:
```bash
# linux and mac:
mkdir build && cd build
cmake -G Ninja .. # Building with ninja
cmake .. # Building with default build system
cmake --build
cd ..
```
If no errors occure this should be it.

## Executing ClingoDebugGui
```bash
./build/ClingDebugGui # Linux and Mac
```
```bash
build\ClingoDebugGui.exe # Windows
```
Please ignore Gtk-Warnings, as they are normal and should mostly be the absence of themes.

## Tweaks for Clion
You can set Clion to generate ninja files if the version of Clion is newer that 2019.3. To do this you have to go to the clion settings via _"File"_ -> _"Settings"_ and navigate to _"Build, Execution, Deployment"_ -> _"CMake"_ and find the text input with the Label: _"CMake Options"_. In there you have to add the following flag:
```bash
-G Ninja
```
If you built the project before changing this you should clear the build directory or simply delete it.