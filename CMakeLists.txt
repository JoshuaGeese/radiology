cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/class/MedicalImagingDevice.cpp src/class/MedicalImagingDevice.h src/class/Patient.cpp src/class/Patient.h)