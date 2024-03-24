cmake_minimum_required(VERSION 3.18)

# -- Preamble --
project("sysc4906c-cpp"
        LANGUAGES CXX
        VERSION "0.1.0"
        DESCRIPTION "Assignment 1 SYSC4906C/Carleton University Winter 2024"
        )

include(CTest)

# -- Project wide setup --
# Setting C++ minimum requirements
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setting build to hide symbols in targets by default
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)

# Preventing writes to package registry by default
set(CMAKE_EXPORT_NO_PACKAGE_REGISTRY YES)

# Validating config type and setting default if needed
get_property(is_multi_conf_build GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
if (NOT is_multi_conf_build)
    set(allowed_build_types Debug Release RelWithDebInfo MinSizeRel)
    # cmake-gui helper
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "${allowed_build_types}")
    if (NOT CMAKE_BUILD_TYPE)
        message(STATUS "Setting build type to 'Debug' as none was specified.")
        set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
    elseif (NOT CMAKE_BUILD_TYPE IN_LIST allowed_build_types)
        message(FATAL_ERROR "Unknown build type: ${CMAKE_BUILD_TYPE}")
    endif ()
endif ()

# -- Dependencies --
# None yet

# Add src targets
add_subdirectory(include)
add_subdirectory(src)

# -- Tests and packaging if running this as top project --
if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    add_subdirectory(test)
endif ()
