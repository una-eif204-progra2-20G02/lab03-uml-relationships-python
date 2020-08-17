cmake_minimum_required(VERSION 3.17)
project(lab03_uml_relationships_python)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab03_uml_relationships_python main.cpp Course.cpp Person.cpp Professor.cpp Student.cpp University.h Career.h University.cpp Career.cpp)