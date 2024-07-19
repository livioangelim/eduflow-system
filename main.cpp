/**
 * @file main.cpp
 * @brief Student Roster Program using C++
 *
 * This program, developed by Livio Mororo, demonstrates the management of a student roster system.
 * It includes parsing student data, creating and manipulating Student objects, managing a collection
 * of students in a Roster, and displaying various reports on student data.
 * 
 * The program utilizes C++ and object-oriented programming principles, including:
 *   - Classes
 *   - Enumerations
 *   - Dynamic memory allocation
 *   - Vector manipulation
 *
 * The main functionality includes:
 *   - Parsing student data from strings
 *   - Creating and manipulating Student objects with appropriate attributes
 *   - Managing a collection of students in a Roster using dynamic memory allocation
 *   - Displaying various reports on student data, such as:
 *     - Invalid emails
 *     - Average days in course
 *     - Students by degree program
 */


#include <iostream>

#include "degree.h"
#include "roster.h"

using namespace std;

int main() {

    // Create an instance of Roster
    Roster classRoster;

    // Array of student data
    string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Livio,Mororo,lange70@wgu.edu,34,60,58,57,SOFTWARE" //Data changed according to STEP A of the task
    };

    // Parsing and add students to classRoster
    for (const string& studentStr : studentData) {
        classRoster.parseStudentData(studentStr);
    }

    // Print all students data
    classRoster.printAll();

    // Print invalid emails
    classRoster.printInvalidEmails();

    // Print average days in course for each student
    for (const auto& studentPtr : classRoster.getClassRosterArray()) {
        classRoster.printAverageDaysInCourse(studentPtr->getStudentID());
    }

    // Print students by degree program 'Software'
    classRoster.printByDegreeProgram(SOFTWARE);

    // Remove student 'A3' and print all students
    classRoster.remove("A3");
    classRoster.printAll();

    
    //Attempt to remove student 'A3' again creating an error message
    classRoster.remove("A3");

    return 0;
}