#include "student.h"
#include <iostream>

using namespace std;

//Constructor  implementation
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, array<int, 3> daysInCourse, DegreeProgram degreeProgram)
    : studentID(studentID), firstName(firstName), lastName(lastName), emailAddress(emailAddress), age(age), daysInCourse(daysInCourse), degreeProgram(degreeProgram) {}

//Implement accessors
string Student::getStudentID() const { return studentID; }
string Student::getFirstName() const { return firstName; }
string Student::getLastName() const { return lastName; }
string Student::getEmailAddress() const { return emailAddress; }
int Student::getAge() const { return age; }
const array<int, 3>& Student::getDaysInCourse() const { return daysInCourse; }
DegreeProgram Student::getDegreeProgram() const { return degreeProgram; }

//Implement mutators
void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysInCourse(array<int, 3> daysInCourse) { this->daysInCourse = daysInCourse; }
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

//Implement print method
void Student::print() const {
    cout << "ID: " << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
        << "\tAge: " << age << "\tdaysInCourse: {" << daysInCourse[0] << ", "
        << daysInCourse[1] << ", " << daysInCourse[2] << "} Degree Program: "
        << DegreeProgramStrings.at(degreeProgram) << endl;
}
