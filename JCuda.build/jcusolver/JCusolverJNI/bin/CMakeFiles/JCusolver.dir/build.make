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
include jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/depend.make

# Include the progress variables for this target.
include jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/progress.make

# Include the compile flags for this target's objects.
include jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/flags.make

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolver.cpp.o: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/flags.make
jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolver.cpp.o: /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolver.cpp.o"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCusolver.dir/src/JCusolver.cpp.o -c /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolver.cpp

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCusolver.dir/src/JCusolver.cpp.i"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolver.cpp > CMakeFiles/JCusolver.dir/src/JCusolver.cpp.i

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCusolver.dir/src/JCusolver.cpp.s"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolver.cpp -o CMakeFiles/JCusolver.dir/src/JCusolver.cpp.s

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.o: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/flags.make
jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.o: /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverDn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.o"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.o -c /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverDn.cpp

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.i"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverDn.cpp > CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.i

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.s"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverDn.cpp -o CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.s

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.o: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/flags.make
jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.o: /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverRf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.o"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.o -c /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverRf.cpp

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.i"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverRf.cpp > CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.i

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.s"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverRf.cpp -o CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.s

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.o: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/flags.make
jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.o: /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverSp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.o"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.o -c /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverSp.cpp

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.i"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverSp.cpp > CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.i

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.s"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverSp.cpp -o CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.s

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.o: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/flags.make
jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.o: /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverMg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.o"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.o -c /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverMg.cpp

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.i"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverMg.cpp > CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.i

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.s"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI/src/JCusolverMg.cpp -o CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.s

# Object files for target JCusolver
JCusolver_OBJECTS = \
"CMakeFiles/JCusolver.dir/src/JCusolver.cpp.o" \
"CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.o" \
"CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.o" \
"CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.o" \
"CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.o"

# External object files for target JCusolver
JCusolver_EXTERNAL_OBJECTS =

/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolver.cpp.o
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverDn.cpp.o
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverRf.cpp.o
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverSp.cpp.o
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/src/JCusolverMg.cpp.o
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/build.make
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcudart_static.a
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/librt.so
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: /usr/lib/aarch64-linux-gnu/libdl.so
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcusolver.so
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcusolverMg.so
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: /usr/local/cuda/lib64/libcusolverMg.so
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: lib/libJCudaCommonJNI.a
/media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so: jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jg/tensordisk/jcuda/JCuda.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library /media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so"
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JCusolver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/build: /media/jg/tensordisk/jcuda/jcusolver/nativeLibraries/linux/aarch64/lib/libJCusolver-11.8.0-linux-aarch64.so

.PHONY : jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/build

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/clean:
	cd /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin && $(CMAKE_COMMAND) -P CMakeFiles/JCusolver.dir/cmake_clean.cmake
.PHONY : jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/clean

jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/depend:
	cd /media/jg/tensordisk/jcuda/JCuda.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jg/tensordisk/jcuda/jcuda-main /media/jg/tensordisk/jcuda/jcusolver/JCusolverJNI /media/jg/tensordisk/jcuda/JCuda.build /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin /media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jcusolver/JCusolverJNI/bin/CMakeFiles/JCusolver.dir/depend
