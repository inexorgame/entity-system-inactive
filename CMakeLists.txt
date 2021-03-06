# Newer versions can't find Visual Studio.
cmake_minimum_required (VERSION 3.4)

# Name the project INEXOR.
project(INEXOR)

# Use the folder structure in source code directory as project structure in Visual Studio.
function(assign_source_group)
    foreach(_source IN ITEMS ${ARGN})
        if (IS_ABSOLUTE "${_source}")
            file(RELATIVE_PATH _source_rel "${CMAKE_CURRENT_SOURCE_DIR}" "${_source}")
        else()
            set(_source_rel "${_source}")
        endif()
        get_filename_component(_source_path "${_source_rel}" PATH)
        string(REPLACE "/" "\\" _source_path_msvc "${_source_path}")
        source_group("${_source_path_msvc}" FILES "${_source}")
    endforeach()
endfunction(assign_source_group)

# Set output directories
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Set C++ standard to C++17.
# This will not be passed to Visual Studio 2017 automatically.
# You have to set the C++ standard to C++17 in the project settings manually.
set(CMAKE_CXX_STANDARD 17)

# Dynamic linking
#
# It will work, as long as the generated bin and lib directories remain siblings.
# The output binary contains only relative paths; no machine-specific paths.
#
# see: https://cmake.org/cmake/help/v3.0/variable/CMAKE_BUILD_WITH_INSTALL_RPATH.html
# see: https://docs.conan.io/en/latest/howtos/manage_shared_libraries/rpaths.html
if(APPLE)
    set(CMAKE_INSTALL_RPATH "@executable_path/../lib")
else()
    set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib")
endif()
set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)

# Dependency setup via conan.
# Download conan executer in case it does not exists.
if(NOT EXISTS "${CMAKE_CURRENT_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/v0.14/conan.cmake"
                 "${CMAKE_CURRENT_BINARY_DIR}/conan.cmake")
endif()

# Execute conan build instructions.
include(${CMAKE_CURRENT_BINARY_DIR}/conan.cmake)

# Set build type to debug.
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif(NOT CMAKE_BUILD_TYPE)

conan_check(VERSION 1.19.1 REQUIRED)
conan_add_remote(NAME bincrafters
                 INDEX 1
                 URL https://api.bintray.com/conan/bincrafters/public-conan)
conan_add_remote(NAME inexor
                 INDEX 2
                 URL https://api.bintray.com/conan/inexorgame/inexor-conan)
conan_add_remote(NAME helmesjo
                 INDEX 3
                 URL https://api.bintray.com/conan/helmesjo/public-conan)
conan_add_remote(NAME neargye
                 INDEX 4
                 URL https://api.bintray.com/conan/neargye/conan-packages)

if(UNIX AND NOT APPLE)
    set(LIBCXX libstdc++11)
endif()

if(UNIX AND NOT APPLE)
    conan_cmake_run(CONANFILE conanfile.py
                    BASIC_SETUP
                    BUILD outdated
                    PROFILE default
                    PROFILE_AUTO build_type
                    KEEP_RPATHS
                    SETTINGS compiler.libcxx=${LIBCXX}
    )
else()
    conan_cmake_run(CONANFILE conanfile.py
                    BASIC_SETUP
                    BUILD outdated
                    PROFILE default
                    PROFILE_AUTO build_type
                    KEEP_RPATHS
    )
endif()

# Automatically search for source files.
include_directories("${CMAKE_SOURCE_DIR}/src")
file(GLOB_RECURSE source_files
  "src/*.hpp"
  "src/*.cpp"
)

# 3 targets: inexor-entity-system-lib, inexor-standalone and inexor-tests
# Each file with "_test" in its name is a file added to inexor-tests
set(NORMAL_SOURCE_FILES)
set(TEST_SOURCE_FILES)
set(BENCHMARK_SOURCE_FILES)
foreach(file ${source_files} )
  if(file MATCHES ".*_test.*" )
     set(TEST_SOURCE_FILES ${TEST_SOURCE_FILES} ${file})
  elseif(file MATCHES ".*_benchmark.*")
      set(BENCHMARK_SOURCE_FILES ${BENCHMARK_SOURCE_FILES} ${file})
  else()
     set(NORMAL_SOURCE_FILES ${NORMAL_SOURCE_FILES} ${file})
  endif()
endforeach()

# All non-test source files minus the main.cpp are going to the library.
set(LIBRARY_SOURCE_FILES ${NORMAL_SOURCE_FILES})
list(REMOVE_ITEM LIBRARY_SOURCE_FILES "src/main.cpp")

# Compile external files into the application binary.
find_package(Corrade REQUIRED Utility)

#set_directory_properties(PROPERTIES CORRADE_USE_PEDANTIC_FLAGS ON)
corrade_add_resource(STATIC_BASE_RESOURCES static/base-resources.conf)
corrade_add_resource(STATIC_IMAGE_RESOURCES static/image-resources.conf)
corrade_add_resource(STATIC_FONT_RESOURCES static/font-resources.conf)
corrade_add_resource(STATIC_TYPE_SYSTEM_RESOURCES static/type-system-resources.conf)

# Print CMake debug messages.
message(STATUS "NORMAL SOURCE FILES: ${NORMAL_SOURCE_FILES} + src/main.cpp")
message(STATUS "TEST SOURCE FILES: ${TEST_SOURCE_FILES}")
message(STATUS "BENCHMARK SOURCE FILES: ${BENCHMARK_SOURCE_FILES}")
message(STATUS "CONAN_LIBS: ${CONAN_LIBS}")
message(STATUS "STATIC_BASE_RESOURCES: ${STATIC_BASE_RESOURCES}")
message(STATUS "STATIC_IMAGE_RESOURCES: ${STATIC_IMAGE_RESOURCES}")
message(STATUS "STATIC_FONT_RESOURCES: ${STATIC_FONT_RESOURCES}")
message(STATUS "STATIC_TYPE_SYSTEM_RESOURCES: ${STATIC_TYPE_SYSTEM_RESOURCES}")

# Entity-system library
add_library(inexor-entity-system-lib ${LIBRARY_SOURCE_FILES})
target_link_libraries(inexor-entity-system-lib ${CONAN_LIBS})
#if(APPLE) <- Fohlen, can you verify this is not needed?
    # target_link_libraries(inexor-entity-system-lib "-framework CoreFoundation")
#endif()

# Inexor standalone application.
add_executable(inexor-standalone
        src/main.cpp
        ${STATIC_BASE_RESOURCES}
        ${STATIC_IMAGE_RESOURCES}
        ${STATIC_FONT_RESOURCES}
        ${STATIC_TYPE_SYSTEM_RESOURCES})
target_link_libraries(inexor-standalone PUBLIC inexor-entity-system-lib)
target_link_libraries(inexor-standalone PUBLIC ${CONAN_LIBS})
target_link_libraries(inexor-standalone PRIVATE Corrade::Utility)
if(APPLE)
    target_link_libraries(inexor-standalone PUBLIC "-framework CoreFoundation")
endif()

# Inexor unit tests.
add_executable(inexor-tests ${TEST_SOURCE_FILES})
target_link_libraries(inexor-tests PUBLIC inexor-entity-system-lib)
target_link_libraries(inexor-tests PUBLIC ${CONAN_LIBS})
if(APPLE)
    target_link_libraries(inexor-tests PUBLIC "-framework CoreFoundation")
endif()

# Inexor benchmarks.
add_executable(inexor-benchmarks ${BENCHMARK_SOURCE_FILES})
target_link_libraries(inexor-benchmarks PUBLIC inexor-entity-system-lib)
target_link_libraries(inexor-benchmarks PUBLIC ${CONAN_LIBS})
if(APPLE)
    target_link_libraries(inexor-benchmarks PUBLIC "-framework CoreFoundation")
endif()

# Use the folder structure in source code directory as project structure in Visual Studio.
assign_source_group(${NORMAL_SOURCE_FILES})
assign_source_group(${TEST_SOURCE_FILES})
