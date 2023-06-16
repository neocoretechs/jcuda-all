# Install script for directory: /media/jg/tensordisk/jcuda/jcuda-main

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcuda/JCudaDriverJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcuda/JCudaRuntimeJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcuda/JNvrtcJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcuda/JNvPTXCompilerJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcublas/JCublasJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcublas/JCublas2JNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcufft/JCufftJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcurand/JCurandJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcusparse/JCusparseJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcusolver/JCusolverJNI/bin/cmake_install.cmake")
  include("/media/jg/tensordisk/jcuda/JCuda.build/jcudnn/JCudnnJNI/bin/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/media/jg/tensordisk/jcuda/JCuda.build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
