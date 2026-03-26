#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include <algorithm>
#include <string>
#include "Student.h"
using namespace std;

class StudentManager {
private:
    vector<Student> students;

public:
    bool addStudent(int id, string name, double gpa);
    bool removeStudent(int id);
    Student* searchStudent(int id);
    void displayAll() const;
    void enrollStudentInCourse(int id, string course);
    void showCourses(int id);
    void sortByGpa();
};

#endif