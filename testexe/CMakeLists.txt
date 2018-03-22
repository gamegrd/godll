#项目名
project(emptyexe)
#最低CMAKE版本
cmake_minimum_required(VERSION 2.6)
#关闭啰嗦模式
SET( CMAKE_VERBOSE_MAKEFILE off )
message("PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR} )
message("PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR} )

if (Debug)
	set(CMAKE_BUILD_TYPE Debug)
	message( ==========DEBUG========== )
	add_definitions(-DDEBUG)
else()
	set(CMAKE_BUILD_TYPE Release)
    add_definitions(-DRELEASE)
	message( >>>>>>Release<<<<< )
endif()

#设置输出文件路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../../bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../../bin)

set(CMAKE_CXX_FLAGS_RELEASE "/MT /Zi")
set(CMAKE_C_FLAGS_RELEASE "/MT /Zi")
#DEBUG设置
set(CMAKE_CXX_FLAGS_DEBUG "/MTd /Zi /Od")
set(CMAKE_C_FLAGS_DEBUG "/MTd /Zi /Od")

link_directories(${PROJECT_SOURCE_DIR}/lib)

#add_subdirectory(lualib-src)
add_subdirectory(sources)
