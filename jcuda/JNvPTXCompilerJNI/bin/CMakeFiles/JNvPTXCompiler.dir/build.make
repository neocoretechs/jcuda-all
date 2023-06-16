# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/jg/tensordisk/jcuda/jcuda-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/jg/tensordisk/jcuda

# Include any dependencies generated for this target.
include jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/depend.make

# Include the progress variables for this target.
include jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/progress.make

# Include the compile flags for this target's objects.
include jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/flags.make

jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.o: jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/flags.make
jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.o: jcuda/JNvPTXCompilerJNI/src/JNvPTXCompiler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.o"
	cd /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.o -c /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/src/JNvPTXCompiler.cpp

jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.i"
	cd /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/src/JNvPTXCompiler.cpp > CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.i

jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.s"
	cd /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/src/JNvPTXCompiler.cpp -o CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.s

# Object files for target JNvPTXCompiler
JNvPTXCompiler_OBJECTS = \
"CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.o"

# External object files for target JNvPTXCompiler
JNvPTXCompiler_EXTERNAL_OBJECTS =

jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/src/JNvPTXCompiler.cpp.o
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/build.make
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcudart_static.a
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/librt.so
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/libdl.so
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libnvptxcompiler_static.a
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: lib/libJCudaCommonJNI.a
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/libcuda.so
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libnvrtc.so
jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so: jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jg/tensordisk/jcuda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so"
	cd /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JNvPTXCompiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/build: jcuda/nativeLibraries/linux/aarch64/lib/libJNvPTXCompiler-11.8.0-linux-aarch64.so

.PHONY : jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/build

jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/clean:
	cd /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/bin && $(CMAKE_COMMAND) -P CMakeFiles/JNvPTXCompiler.dir/cmake_clean.cmake
.PHONY : jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/clean

jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/depend:
	cd /media/jg/tensordisk/jcuda && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jg/tensordisk/jcuda/jcuda-main /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI /media/jg/tensordisk/jcuda /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/bin /media/jg/tensordisk/jcuda/jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jcuda/JNvPTXCompilerJNI/bin/CMakeFiles/JNvPTXCompiler.dir/depend
