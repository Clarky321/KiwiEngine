cmake_minimum_required(VERSION 3.12)

project(KiwiEngineTests)

include(FetchContent)
FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest
	GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

set(TEST_SOURCES
	src/test_application.cpp
)

add_executable(engine_tests ${TEST_SOURCES})

include(GoogleTest)
gtest_discover_tests(engine_tests)

target_link_libraries(engine_tests KiwiEngineCore gtest_main)

target_compile_features(engine_tests PUBLIC cxx_std_17)