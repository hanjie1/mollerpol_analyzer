# Install script for directory: /work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean

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
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libMollerPol.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libMollerPol.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libMollerPol.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/build/libMollerPol.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libMollerPol.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libMollerPol.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libMollerPol.so"
         OLD_RPATH "/work/halla/moller12gev/asar/Analyzer/local/analyzer-1.7.18/lib64:/u/group/halla/apps/ROOT/6.32-14/el9/RelWithDebInfo/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libMollerPol.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/MollerPolCalorimeter.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/MollerPolApparatus.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/Scaler9250.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/MollerPolScalerEvtHandler.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/MollerPolHelicityDecoderBoard.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MPDModule.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERData.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERElement.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERManager.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERGenericDetector.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERSpectrometer.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERGEMModule.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERGEMTrackerBase.h"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem/MOLLERGEMSpectrometerTracker.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE FILE FILES
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/build/libMollerPol_rdict.pcm"
    "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/build/libMollerPol.rootmap"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
