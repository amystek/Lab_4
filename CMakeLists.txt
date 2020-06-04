cmake_minimum_required(VERSION 3.15)
project(Lab_4)

set(CMAKE_CXX_STANDARD 98)

add_executable(Lab_4 main.cpp ErrorClasses/CFileLastError.cpp ErrorClasses/CFileLastError.h ErrorClasses/CFileThrowEx.cpp ErrorClasses/CFileThrowEx.h ErrorClasses/CFileErrCode.cpp ErrorClasses/CFileErrCode.h main.h)