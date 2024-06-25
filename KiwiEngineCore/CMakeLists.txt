cmake_minimum_required(VERSION 3.12)

set(ENGINE_PROJECT_NAME KiwiEngineCore)

include(FetchContent)

# Fetch raylib
FetchContent_Declare(
	raylib
	GIT_REPOSITORY https://github.com/raysan5/raylib.git
	GIT_TAG 5.0
)

FetchContent_MakeAvailable(raylib)

#########################################################

set(ENGINE_PUBLIC_INCLUDES

	includes/KiwiEngineCore/Application.h
)

set(ENGINE_PUBLIC_SOURCES

	src/KiwiEngineCore/Application.cpp

)

set(ENGINE_ALL_SOURCES
	${ENGINE_PUBLIC_INCLUDES}
	${ENGINE_PUBLIC_SOURCES}
)

#########################################################

add_library(${ENGINE_PROJECT_NAME} STATIC ${ENGINE_ALL_SOURCES})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${ENGINE_ALL_SOURCE})

target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes ${raylib_SOURCE_DIR}/src)

target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

target_link_libraries(${ENGINE_PROJECT_NAME}
	raylib
)