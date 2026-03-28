# Student Management System

A C++ console application for managing student records, built using Object-Oriented Programming principles and the C++ Standard Template Library (STL).

---

## Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [Built With](#built-with)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation & Compilation](#installation--compilation)
  - [Running the Program](#running-the-program)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [UML Class Diagram](#uml-class-diagram)
- [Author](#author)

---

## About the Project

The **Student Management System** is a menu-driven console application that allows users to:
- Add, remove, and search for students
- View all registered students
- Enroll students in courses
- View courses per student
- Sort students by GPA

---

## Features

- ✅ Add a student (ID, Name, GPA)
- ✅ Remove a student by ID
- ✅ Search a student by ID
- ✅ Display all students
- ✅ Enroll a student in a course (no duplicates)
- ✅ Show all courses for a student
- ✅ Sort students by GPA (High → Low)
- ✅ Input validation (unique IDs, GPA 0.0–4.0)

---

## Built With

- **Language:** C++17
- **STL Containers:** `std::vector`, `std::set`
- **STL Algorithms:** `std::sort`, `std::find_if`
- **OOP Concepts:** Classes, Encapsulation, Inheritance (`Person` → `Student`)

---

## Getting Started

### Prerequisites

| Requirement | Version |
|-------------|---------|
| C++ Compiler | g++ 9+ / clang++ 9+ / MSVC 2019+ |
| Operating System | Windows / Linux / macOS |
| Build Tool | Terminal / Command Prompt |

Make sure you have a C++ compiler installed:

```bash
# Check g++ version
g++ --version
```

---

### Installation & Compilation

1. **Clone the repository:**

```bash
git clone https://github.com/your-username/student-management-system.git
cd student-management-system
```

2. **Compile all source files:**

```bash
g++ -std=c++17 -o StudentMS \
    StudentManagementSystem.cpp \
    StudentManager.cpp \
    Student.cpp \
    Person.cpp
```

> **Windows (MinGW):**
> ```bash
> g++ -std=c++17 -o StudentMS.exe StudentManagementSystem.cpp StudentManager.cpp Student.cpp Person.cpp
> ```

> **Visual Studio:** Open a new project, add all `.cpp` and `.h` files, then build with `Ctrl+Shift+B`.

---

### Running the Program

```bash
# Linux / macOS
./StudentMS

# Windows
StudentMS.exe
```

---

## Usage

Once launched, you will see the main menu:

```
===== Student Management System =====
1. Add Student
2. Remove Student
3. Search Student
4. Display All Students
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
Choice:
```

**Example interaction:**

```
Choice: 1
Enter Student ID: 1001
Enter Name: Ali
Enter GPA: 3.5
Student added successfully.

Choice: 5
Enter Student ID: 1001
Enter Course Name: Mathematics
Enrolled successfully.

Choice: 7
Students sorted by GPA (High to Low):
ID: 1001 | Name: Ali | GPA: 3.5
```

---

## Project Structure

```
student-management-system/
│
├── Person.h                    # Base class declaration
├── Person.cpp                  # Base class implementation
├── Student.h                   # Derived class declaration
├── Student.cpp                 # Derived class implementation
├── StudentManager.h            # Manager class declaration
├── StudentManager.cpp          # Manager class implementation
├── StudentManagementSystem.cpp # Main entry point (menu loop)
└── README.md                   # This file
```

---

## UML Class Diagram

```
+------------------+
|     Person       |
+------------------+
| # name: string   |
+------------------+
| + getName()      |
| + setName()      |
+------------------+
        ▲
        | (inheritance)
        |
+---------------------------+
|         Student           |
+---------------------------+
| - id: int                 |
| - gpa: double             |
| - courses: set<string>    |
+---------------------------+
| + getId()                 |
| + getGpa()                |
| + getCourses()            |
| + setGpa()                |
| + enrollCourse()          |
| + displayInfo()           |
+---------------------------+
        ▲
        | (uses)
        |
+---------------------------+
|      StudentManager       |
+---------------------------+
| - students: vector<Student>|
+---------------------------+
| + addStudent()            |
| + removeStudent()         |
| + searchStudent()         |
| + displayAll()            |
| + enrollStudentInCourse() |
| + showCourses()           |
| + sortByGpa()             |
+---------------------------+
```

---

## Author

**[Your Name]**  
Student ID: [Your ID]  
Course: [Course Name]  
Institution: [Your University]
