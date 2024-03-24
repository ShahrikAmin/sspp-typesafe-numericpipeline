add_library(sysc4906c_lib INTERFACE)
add_library(sysc4906c::lib ALIAS sysc4906c_lib)

target_include_directories(
        sysc4906c_lib
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
