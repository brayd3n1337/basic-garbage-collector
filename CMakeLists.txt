cmake_minimum_required(VERSION 3.28)
project(garbage_collector)

set(CMAKE_CXX_STANDARD 17)

add_executable(garbage_collector main.cpp
        global_includes.h
        repository/ClassRepository.cpp
        repository/ClassRepository.h
        objects/garbage_collected_object.cpp
        objects/garbage_collected_object.h
        example/example_class.cpp
        example/example_class.h)
