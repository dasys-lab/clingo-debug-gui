# clingo-debug-gui

## Installing this software
wxWidgets is included in this repository as a git submodule, so it does not have to be installed manually! We provide commands to clone via https and via ssh, you only need to execute one!
```bash
git clone --recurse-submodules http://www.github.com/dasys-lab/clingo-debug-gui.git # Clone via https
git clone --recurse-submodules git@github.com:dasys-lab/clingo-debug-gui.git # Clone via ssh
```
To build the project input the following commands one after the other:
```bash
# linux and mac:
mkdir build && cd build
cmake ..
make
```
If no errors occure this should be it. 
