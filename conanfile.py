from conans import ConanFile, CMake


class ClingoDebugGui(ConanFile):
    name = "ClingoDebugGui"
    version = "0.1"
    description = """A ui to debug asp scripts using clingo."""
    generators = "cmake", "gcc"
    build_policy = "missing"
    options = {}

    def requirements(self):
        self.requires("wxwidgets/3.1.2@bincrafters/stable", private=True, override=False)
        self.requires("jsoncpp/1.9.0@theirix/stable", private=True, override=False)

    def build(self):
        cmake = CMake(self)
        if self.should_configure:
            cmake.configure()
        if self.should_build:
            cmake.build()
        if self.should_install:
            cmake.install()
        if self.should_test:
            cmake.test()

    # def package_info(self):
    #     self.cpp_info.name = "<PKG_NAME>"
    #     self.cpp_info.names["generator_name"] = "<PKG_NAME>"
    #     self.cpp_info.includedirs = ['include']  # Ordered list of include paths
    #     self.cpp_info.libs = []  # The libs to link against
    #     self.cpp_info.libdirs = ['lib']  # Directories where libraries can be found
    #     self.cpp_info.resdirs = ['res']  # Directories where resources, data, etc can be found
    #     self.cpp_info.bindirs = ['bin']  # Directories where executables and shared libs can be found
    #     self.cpp_info.srcdirs = []  # Directories where sources can be found (debugging, reusing sources)
    #     self.cpp_info.build_modules = []  # Build system utility module files
    #     self.cpp_info.defines = []  # preprocessor definitions
    #     self.cpp_info.cflags = []  # pure C flags
    #     self.cpp_info.cxxflags = []  # C++ compilation flags
    #     self.cpp_info.sharedlinkflags = []  # linker flags
    #     self.cpp_info.exelinkflags = []  # linker flags
    #     self.cpp_info.system_libs = []  # The system libs to link against

    # def package(self):
    #     pass