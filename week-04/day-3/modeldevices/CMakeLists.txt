cmake_minimum_required(VERSION 3.13)
project(modeldevices)

set(CMAKE_CXX_STANDARD 14)

add_executable(modeldevices main.cpp printer.cpp printer.h printer2D.cpp printer2D.h printer3D.cpp printer3D.h scanner.cpp scanner.h copier.cpp copier.h)