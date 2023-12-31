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
CMAKE_BINARY_DIR = /media/jg/tensordisk/jcuda/JCuda.build

# Include any dependencies generated for this target.
include jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/depend.make

# Include the progress variables for this target.
include jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/progress.make

# Include the compile flags for this target's objects.
include jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/flags.make

jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/src/JCusparse.cpp.o: jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/flags.make
jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/src/JCusparse.cpp.o: /media/jg/tensordisk/jcuda/jcusparse/JCusparseJNI/src/JCusparse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/src/JCusparse.cpp.o"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCusparse.dir/src/JCusparse.cpp.o -c /media/jg/tensordisk/jcuda/jcusparse/JCusparseJNI/src/JCusparse.cpp

jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/src/JCusparse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCusparse.dir/src/JCusparse.cpp.i"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcusparse/JCusparseJNI/src/JCusparse.cpp > CMakeFiles/JCusparse.dir/src/JCusparse.cpp.i

jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/src/JCusparse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCusparse.dir/src/JCusparse.cpp.s"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcusparse/JCusparseJNI/src/JCusparse.cpp -o CMakeFiles/JCusparse.dir/src/JCusparse.cpp.s

# Object files for target JCusparse
JCusparse_OBJECTS = \
"CMakeFiles/JCusparse.dir/src/JCusparse.cpp.o"

# External object files for target JCusparse
JCusparse_EXTERNAL_OBJECTS =

/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/src/JCusparse.cpp.o
/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/build.make
/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcudart_static.a
/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/librt.so
/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/libdl.so
/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcusparse.so
/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: lib/libJCudaCommonJNI.a
/media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so: jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JCusparse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/build: /media/jg/tensordisk/jcuda/jcusparse/nativeLibraries/linux/aarch64/lib/libJCusparse-11.8.0-linux-aarch64.so

.PHONY : jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/build

jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/clean:
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin && $(CMAKE_COMMAND) -P CMakeFiles/JCusparse.dir/cmake_clean.cmake
.PHONY : jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/clean

jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/depend:
	cd /media/jg/tensordisk/jcuda/JCuda.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jg/tensordisk/jcuda/jcuda-main /media/jg/tensordisk/jcuda/jcusparse/JCusparseJNI /media/jg/tensordisk/jcuda/JCuda.build /media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin /media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jcusparse/JCusparseJNI/bin/CMakeFiles/JCusparse.dir/depend

