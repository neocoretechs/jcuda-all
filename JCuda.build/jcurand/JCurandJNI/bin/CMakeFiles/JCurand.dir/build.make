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
include jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/depend.make

# Include the progress variables for this target.
include jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/progress.make

# Include the compile flags for this target's objects.
include jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/flags.make

jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/src/JCurand.cpp.o: jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/flags.make
jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/src/JCurand.cpp.o: /media/jg/tensordisk/jcuda/jcurand/JCurandJNI/src/JCurand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/src/JCurand.cpp.o"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCurand.dir/src/JCurand.cpp.o -c /media/jg/tensordisk/jcuda/jcurand/JCurandJNI/src/JCurand.cpp

jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/src/JCurand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCurand.dir/src/JCurand.cpp.i"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcurand/JCurandJNI/src/JCurand.cpp > CMakeFiles/JCurand.dir/src/JCurand.cpp.i

jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/src/JCurand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCurand.dir/src/JCurand.cpp.s"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcurand/JCurandJNI/src/JCurand.cpp -o CMakeFiles/JCurand.dir/src/JCurand.cpp.s

# Object files for target JCurand
JCurand_OBJECTS = \
"CMakeFiles/JCurand.dir/src/JCurand.cpp.o"

# External object files for target JCurand
JCurand_EXTERNAL_OBJECTS =

/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/src/JCurand.cpp.o
/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/build.make
/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcudart_static.a
/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/librt.so
/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/libdl.so
/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcurand.so
/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: lib/libJCudaCommonJNI.a
/media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so: jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JCurand.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/build: /media/jg/tensordisk/jcuda/jcurand/nativeLibraries/linux/aarch64/lib/libJCurand-11.8.0-linux-aarch64.so

.PHONY : jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/build

jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/clean:
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin && $(CMAKE_COMMAND) -P CMakeFiles/JCurand.dir/cmake_clean.cmake
.PHONY : jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/clean

jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/depend:
	cd /media/jg/tensordisk/jcuda/JCuda.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jg/tensordisk/jcuda/jcuda-main /media/jg/tensordisk/jcuda/jcurand/JCurandJNI /media/jg/tensordisk/jcuda/JCuda.build /media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin /media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jcurand/JCurandJNI/bin/CMakeFiles/JCurand.dir/depend

