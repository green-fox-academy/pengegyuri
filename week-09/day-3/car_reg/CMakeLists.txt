cmake_minimum_required(VERSION 3.13)
project(car_reg C)

set(CMAKE_C_STANDARD 11)

add_executable(car_reg main.c cars.h cars.c)