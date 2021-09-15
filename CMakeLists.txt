cmake_minimum_required(VERSION 3.20)
project(Lab2)

set(CMAKE_CXX_STANDARD 23)

add_library(Evolventa.cpp Evolventa.h)
add_executable(Lab2 main.cpp Evolventa.cpp Evolventa.h)