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
include jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/depend.make

# Include the progress variables for this target.
include jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/progress.make

# Include the compile flags for this target's objects.
include jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/flags.make

jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/src/JCublas2.cpp.o: jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/flags.make
jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/src/JCublas2.cpp.o: jcublas/JCublas2JNI/src/JCublas2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/src/JCublas2.cpp.o"
	cd /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCublas2.dir/src/JCublas2.cpp.o -c /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/src/JCublas2.cpp

jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/src/JCublas2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCublas2.dir/src/JCublas2.cpp.i"
	cd /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/src/JCublas2.cpp > CMakeFiles/JCublas2.dir/src/JCublas2.cpp.i

jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/src/JCublas2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCublas2.dir/src/JCublas2.cpp.s"
	cd /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/src/JCublas2.cpp -o CMakeFiles/JCublas2.dir/src/JCublas2.cpp.s

# Object files for target JCublas2
JCublas2_OBJECTS = \
"CMakeFiles/JCublas2.dir/src/JCublas2.cpp.o"

# External object files for target JCublas2
JCublas2_EXTERNAL_OBJECTS =

jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/src/JCublas2.cpp.o
jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/build.make
jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcudart_static.a
jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/librt.so
jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/libdl.so
jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcublas.so
jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: lib/libJCudaCommonJNI.a
jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so: jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jg/tensordisk/jcuda/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so"
	cd /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JCublas2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/build: jcublas/nativeLibraries/linux/aarch64/lib/libJCublas2-11.8.0-linux-aarch64.so

.PHONY : jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/build

jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/clean:
	cd /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/bin && $(CMAKE_COMMAND) -P CMakeFiles/JCublas2.dir/cmake_clean.cmake
.PHONY : jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/clean

jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/depend:
	cd /media/jg/tensordisk/jcuda && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jg/tensordisk/jcuda/jcuda-main /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI /media/jg/tensordisk/jcuda /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/bin /media/jg/tensordisk/jcuda/jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jcublas/JCublas2JNI/bin/CMakeFiles/JCublas2.dir/depend

