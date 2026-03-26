

#include <iostream>
#include "StudentManager.h"
using namespace std;


int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Enroll Student in Course\n";
        cout << "6. Show Student Courses\n";
        cout << "7. Sort Students by GPA\n";
        cout << "8. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;
            double gpa;
            cout << "Enter Student ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter GPA: "; cin >> gpa;
            manager.addStudent(id, name, gpa);

        }
        else if (choice == 2) {
            int id;
            cout << "Enter Student ID: "; cin >> id;
            manager.removeStudent(id);

        }
        else if (choice == 3) {
            int id;
            cout << "Enter Student ID: "; cin >> id;
            Student* s = manager.searchStudent(id);
            if (s) s->displayInfo();
            else cout << "Student not found!\n";

        }
        else if (choice == 4) {
            manager.displayAll();

        }
        else if (choice == 5) {
            int id;
            string course;
            cout << "Enter Student ID: "; cin >> id;
            cout << "Enter Course Name: "; cin >> course;
            manager.enrollStudentInCourse(id, course);

        }
        else if (choice == 6) {
            int id;
            cout << "Enter Student ID: "; cin >> id;
            manager.showCourses(id);

        }
        else if (choice == 7) {
            manager.sortByGpa();

        }
        else if (choice != 8) {
            cout << "Invalid choice! Please enter 1-8\n";
        }

    } while (choice != 8);

    cout << "Goodbye!\n";
    return 0;
}

