#include "roster.h"
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

//Implement destructor to release allocated memory
Roster::~Roster() {
	classRosterArray.clear();
}

//Implement add method to add student data to roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	array<int, 3> daysInCourse = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray.push_back(make_unique<Student>(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram));
}

//Implement parseStudentData method to parse student data from input
void Roster::parseStudentData(const string& studentData) {
	istringstream ss(studentData);
	string token;

	string studentID, firstName, lastName, emailAddress;
	int age, daysInCourse1, daysInCourse2, daysInCourse3;
	DegreeProgram degreeProgram;

	getline(ss, studentID, ',');
	getline(ss, firstName, ',');
	getline(ss, lastName, ',');
	getline(ss, emailAddress, ',');

	ss >> age;
	ss.ignore();

	ss >> daysInCourse1;
	ss.ignore();
	ss >> daysInCourse2;
	ss.ignore();
	ss >> daysInCourse3;
	ss.ignore();

	string degreeStr;
	getline(ss, degreeStr, ',');
	if (degreeStr == "SECURITY") {
		degreeProgram = SECURITY;
	}
	else if (degreeStr == "NETWORK") {
		degreeProgram = NETWORK;
	}
	else if (degreeStr == "SOFTWARE") {
		degreeProgram = SOFTWARE;
	}

	add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

//Implement remove method to  remove a student record by studentID
void Roster::remove(string studentID) {
	auto it = remove_if(classRosterArray.begin(), classRosterArray.end(),
		[&studentID](const unique_ptr<Student>& student) { return student->getStudentID() == studentID; });
	if (it != classRosterArray.end()) {
		classRosterArray.erase(it, classRosterArray.end());
		cout << "Student ID " << studentID << " removed." << endl;
	}
	else {
		cout << "Error: Student ID " << studentID << " not found." << endl;
	}
}

//Implement printAll method to print all student records
void Roster::printAll() const {
	for (const auto& student : classRosterArray) {
		student->print();
	}
}

//Implement printAverageDaysInCourse method to print average days for each of the three courses
void Roster::printAverageDaysInCourse(string studentID) const {
	for (const auto& student : classRosterArray) {
		if (student->getStudentID() == studentID) {
			const auto& days = student->getDaysInCourse();
			cout << "Average Days in course " << studentID << ": "
				<< (days[0] + days[1] + days[2]) / 3.0 << endl;
			return;
		}
	}
}

//Implement printInvalidEmails method to print error message for invalid emails
void Roster::printInvalidEmails() const {
	for (const auto& student : classRosterArray) {
		string email = student->getEmailAddress();
		if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
			cout << "Invalid email: " << email << endl;
		}
	}
}

//Implement printByDegreeProgram method to print sorted by a specific degree
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
	cout << "Degree Program: " << DegreeProgramStrings.at(degreeProgram) << endl;

	for (const auto& student : classRosterArray) {
		if (student->getDegreeProgram() == degreeProgram) {
			student->print();
		}
	}
}

//Accessor method implementation
const vector<unique_ptr<Student>>& Roster::getClassRosterArray() const {
	return classRosterArray;
}
