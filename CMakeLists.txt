cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME KiwiEngine)
project(${PROJECT_NAME})

add_subdirectory(KiwiEngineCore)
add_subdirectory(KiwiEngineEditor)

#enable_testing()
#add_subdirectory(tests)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT KiwiEngineEditor)