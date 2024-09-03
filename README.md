# Roster Program

## Overview
This C++ program, developed by Livio A. M., demonstrates the management of a student roster system. The program includes functionality for parsing student data, creating and manipulating Student objects, managing a collection of students in a Roster, and displaying various reports on student data. It leverages object-oriented programming principles and various C++ features.

## Features
The program offers the following key functionalities:

- **Parsing Student Data**: Reads and processes student data from strings.
- **Student Object Management**: Creates and manipulates Student objects with attributes such as ID, name, email, age, and course duration.
- **Roster Management**: Manages a collection of students using dynamic memory allocation.
- **Reporting**: Displays various reports on student data, including:
  - Invalid emails
  - Average days in course
  - Students by degree program

## Enhancements
### 1. Database Integration
- Uses SQLite to store and manage student data.
- Implements CRUD operations using SQL queries.

### 2. REST API
- Creates a RESTful API for managing student records.
- Uses Crow framework for setting up endpoints.

### 3. Unit Testing
- Implements unit tests using Google Test.
- Validates email addresses, calculates average days in course, and verifies student addition/removal.

### 4. Error Handling
- Enhances error handling using exceptions and validation checks.

### 5. Concurrency
- Implements multithreading for handling large datasets and concurrent requests.

### 6. Documentation and Code Comments
- Provides detailed comments and generates documentation using Doxygen.

### 7. CI/CD Pipeline
- Sets up a CI/CD pipeline using GitHub Actions for automated testing and deployment.

### 8. Graphical User Interface (GUI)
- Creates a simple GUI using Qt for managing the student roster.

### 9. Cloud Deployment
- Deploys the application on AWS using Docker.

### 10. Advanced Reporting
- Adds comprehensive reporting features and exports data to CSV and PDF formats.
   

## Usage
Upon running the program, it will parse student data and perform the following tasks:
- Display all students
- Display invalid email addresses
- Display average days in course for each student
- Display students by degree program


### License
This project is licensed under the MIT License. See the LICENSE file for details.

### Acknowledgments
This project was developed as part of a coursework assignment. 

### Contact
For any questions or suggestions, please contact Livio A. M. at it.livioam@gmail.com
