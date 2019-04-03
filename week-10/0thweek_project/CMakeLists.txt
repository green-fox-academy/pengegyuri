
cmake_minimum_required(VERSION 3.13)
project(0thweek_project)

set(CMAKE_CXX_STANDARD 17)



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(OpenCV_FOUND 1)
find_package( OpenCV REQUIRED )

set(SOURCE_FILES main.cpp)

add_executable(0thweek_project main.cpp)

target_link_libraries(0thweek_project ${OpenCV_LIBS})