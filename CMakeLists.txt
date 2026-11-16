cmake_minimum_required(VERSION 3.16)
project(LibraryManagement LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(library
    src/main.cpp
    src/Media.cpp
    src/Book.cpp
    src/Movie.cpp
    src/User.cpp
    src/LibraryManager.cpp
)

target_include_directories(library PRIVATE include)

if(MSVC)
    target_compile_options(library PRIVATE /W4)
else()
    target_compile_options(library PRIVATE -Wall -Wextra -Wpedantic)
endif()
