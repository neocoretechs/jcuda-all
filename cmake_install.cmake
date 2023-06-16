# Install script for directory: C:/jcuda/jcuda-main

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/jcuda/jcuda/JCudaDriverJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcuda/JCudaRuntimeJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcuda/JNvrtcJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcuda/JNvPTXCompilerJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcublas/JCublasJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcublas/JCublas2JNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcufft/JCufftJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcurand/JCurandJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcusparse/JCusparseJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcusolver/JCusolverJNI/bin/cmake_install.cmake")
  include("C:/jcuda/jcudnn/JCudnnJNI/bin/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/jcuda/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
