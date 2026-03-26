#include "Student.h"

// Constructor
Student::Student(int id, string name, double gpa)
    : Person(name), id(id), gpa(gpa) {
}

// Getters
int Student::getId() const {
    return id;
}

double Student::getGpa() const {
    return gpa;
}

set<string> Student::getCourses() const {
    return courses;
}

// Setters
void Student::setGpa(double g) {
    gpa = g;
}

// Course Management
bool Student::enrollCourse(string course) {
    return courses.insert(course).second;
}

// Display
void Student::displayInfo() const {
    cout << "ID: " << id
        << " | Name: " << name
        << " | GPA: " << gpa << endl;
}