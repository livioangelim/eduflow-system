cmake_minimum_required(VERSION 3.28)
project(Student_Roster_Program)

set(CMAKE_CXX_STANDARD 17)

add_executable(Student_Roster_Program
        main.cpp
        include/degree.h
        include/student.h
        include/roster.h
        src/student.cpp
        src/roster.cpp)
