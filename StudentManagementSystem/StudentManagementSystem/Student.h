#ifndef STUDENT_H
#define STUDENT_H

#include <set>
#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person {
private:
    int id;
    double gpa;
    set<string> courses;

public:
    Student(int id, string name, double gpa);

    // Getters
    int getId() const;
    double getGpa() const;
    set<string> getCourses() const;

    // Setters
    void setGpa(double g);

    // Course Management
    bool enrollCourse(string course);

    // Display
    void displayInfo() const;
};

#endif
