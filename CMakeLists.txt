cmake_minimum_required(VERSION 3.15)
project(objc C)

set(CMAKE_C_STANDARD 99)

add_executable(objc main.c objc_class.c objc_class.h objc_object.c objc_object.h)