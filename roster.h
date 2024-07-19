#pragma once

#include "student.h"
#include <vector>
#include <memory>

using namespace std;

//STEP E of the task: Create the Roster class
class Roster {
public:
    //Constructor
    Roster() = default;

    //Destructor
    ~Roster();

    //Add student to the  roster
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

    //Remove student from the roster
    void remove(string studentID);

    //Print all student details
    void printAll() const;

    //Print the average days in course for a student
    void printAverageDaysInCourse(string studentID) const;

    //Print email addresses that are invalid
    void printInvalidEmails() const;

    //Print students by degree program
    void printByDegreeProgram(DegreeProgram degreeProgram) const;

    //Method to parse student data from a string
    void parseStudentData(const string& studentData);

    //Accessor method to get the class roster array
    const vector<unique_ptr<Student>>& getClassRosterArray() const;

private:
    //Private member variable to store the roster of students
    vector<unique_ptr<Student>> classRosterArray;
};
