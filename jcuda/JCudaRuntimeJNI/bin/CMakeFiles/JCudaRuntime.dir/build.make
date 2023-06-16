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
include jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/depend.make

# Include the progress variables for this target.
include jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/progress.make

# Include the compile flags for this target's objects.
include jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/flags.make

jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.o: jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/flags.make
jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.o: jcuda/JCudaRuntimeJNI/src/JCudaRuntime.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.o"
	cd /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.o -c /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/src/JCudaRuntime.cpp

jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.i"
	cd /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/src/JCudaRuntime.cpp > CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.i

jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.s"
	cd /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/src/JCudaRuntime.cpp -o CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.s

# Object files for target JCudaRuntime
JCudaRuntime_OBJECTS = \
"CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.o"

# External object files for target JCudaRuntime
JCudaRuntime_EXTERNAL_OBJECTS =

jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so: jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/src/JCudaRuntime.cpp.o
jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so: jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/build.make
jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcudart_static.a
jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/librt.so
jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/libdl.so
jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so: lib/libJCudaCommonJNI.a
jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so: jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jg/tensordisk/jcuda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so"
	cd /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JCudaRuntime.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/build: jcuda/nativeLibraries/linux/aarch64/lib/libJCudaRuntime-11.8.0-linux-aarch64.so

.PHONY : jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/build

jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/clean:
	cd /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/bin && $(CMAKE_COMMAND) -P CMakeFiles/JCudaRuntime.dir/cmake_clean.cmake
.PHONY : jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/clean

jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/depend:
	cd /media/jg/tensordisk/jcuda && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jg/tensordisk/jcuda/jcuda-main /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI /media/jg/tensordisk/jcuda /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/bin /media/jg/tensordisk/jcuda/jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jcuda/JCudaRuntimeJNI/bin/CMakeFiles/JCudaRuntime.dir/depend
