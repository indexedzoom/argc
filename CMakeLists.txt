cmake_minimum_required(VERSION 3.25.2)

project(argc)

add_executable(argc main.cpp)

install(TARGETS argc DESTINATION bin)
