find_package(Catch2 REQUIRED)
ENABLE_TESTING()

# Collecting all tests in this directory by globbing _test.cpp suffixed files
FILE(GLOB TestSources RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *_test.cpp)
foreach (testSrc ${TestSources})
    get_filename_component(testName ${testSrc} NAME_WE)
    add_executable(${testName})
    target_sources(${testName} PRIVATE ${testSrc})
    target_include_directories(${testName} PRIVATE ${CATCH2_INCLUDE_DIR})
    target_link_libraries(${testName} sysc4906c::lib Catch2::Catch2WithMain)
    add_test(${testName} ${testName})
endforeach (testSrc)

