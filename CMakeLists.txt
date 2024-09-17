cmake_minimum_required(VERSION 3.28)
project(webview-sample)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Statik derleme için gerekli ayarlar
#set(BUILD_SHARED_LIBS OFF)
#set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")


find_package(CURL REQUIRED)
find_package(PkgConfig REQUIRED)


pkg_check_modules(GTK REQUIRED gtk+-3.0)
pkg_check_modules(WEBKIT REQUIRED webkit2gtk-4.1)

include_directories(${GTK_INCLUDE_DIRS} ${WEBKIT_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS} ${WEBKIT_LIBRARY_DIRS})

add_executable(${PROJECT_NAME}
        main.cpp
        embedded_files.h
        libs/libcpp-http-client.hpp)

target_link_libraries(${PROJECT_NAME} PRIVATE CURL::libcurl ${GTK_LIBRARIES} ${WEBKIT_LIBRARIES})
