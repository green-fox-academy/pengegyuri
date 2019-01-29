cmake_minimum_required(VERSION 3.13)
project(BlogPost)

set(CMAKE_CXX_STANDARD 14)

add_executable(BlogPost main.cpp cmake-build-debug/Blog_post.cpp cmake-build-debug/Blog_post.h)