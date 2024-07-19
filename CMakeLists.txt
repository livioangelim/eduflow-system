cmake_minimum_required(VERSION 3.28)
project(Student_Roster_Program)

set(CMAKE_CXX_STANDARD 17)

add_executable(Student_Roster_Program
        main.cpp
        degree.h
        student.h
        roster.h
        student.cpp
        roster.cpp)
