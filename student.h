#pragma once

#include <string>
#include <array>
#include "degree.h"

using namespace std;

//Create the Student class with required instance  variables
class Student {
public:
    //Default constructor
    Student() = default;

    //Parameterized constructor
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, array<int, 3> daysInCourse, DegreeProgram degreeProgram);


    //Create the accessors (getters) for each instance variable
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    const array<int, 3>& getDaysInCourse() const;
    DegreeProgram getDegreeProgram() const;


    //Create mutators (setters) for each instance variable
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysInCourse(array<int, 3> daysInCourse);
    void setDegreeProgram(DegreeProgram degreeProgram);

    //Method to display student details
    void print() const;

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    array<int, 3> daysInCourse;
    DegreeProgram degreeProgram;
};