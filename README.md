# EduFlow System

## Overview
EduFlow System is a C++ program developed by Livio A. M. for managing educational data. The program features student data parsing, object management, roster handling, and generates various reports. It leverages object-oriented programming principles and advanced C++ features.

## Features
The system offers the following key functionalities:

- **Data Parsing**: Reads and processes educational data from strings.
- **Object Management**: Manages student objects with attributes like ID, name, email, age, and course duration.
- **Data Management**: Organizes and manipulates a collection of educational data using dynamic memory allocation.
- **Reporting**: Generates reports on student data, including:
  - Invalid emails
  - Average course completion time
  - Data by educational program

## Enhancements
### 1. Database Integration
- Uses SQLite to manage educational data with CRUD operations via SQL queries.

### 2. REST API
- Provides a RESTful API for managing records, built with Crow framework.

### 3. Unit Testing
- Implements unit tests with Google Test to validate functionality and performance.

### 4. Error Handling
- Strengthens reliability using exception handling and validation mechanisms.

### 5. Concurrency
- Utilizes multithreading to handle large datasets and multiple requests.

### 6. Documentation
- Generates detailed documentation with Doxygen and provides comprehensive code comments.

### 7. CI/CD Pipeline
- Configures CI/CD pipeline using GitHub Actions for automated testing and continuous deployment.

### 8. Graphical User Interface (GUI)
- Developed a simple GUI with Qt for easy interaction with educational data.

### 9. Cloud Deployment
- Deploys the system to AWS using Docker for seamless cloud integration.

### 10. Advanced Reporting
- Exports comprehensive reports in CSV and PDF formats.

## Usage
Upon running the program, it performs the following tasks:
- Displays all educational records
- Highlights invalid email addresses
- Calculates average days in course for each student
- Organizes data by educational program

## Acknowledgments
This project was developed as part of a coursework assignment.

## Contact
For any questions or suggestions, please contact Livio A. M. at it.livioam@gmail.com
