#include "StudentManager.h"

bool StudentManager::addStudent(int id, string name, double gpa) {
    if (gpa < 0.0 || gpa > 4.0) {
        cout << "Invalid GPA! Must be between 0.0 and 4.0\n";
        return false;
    }

    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) { return s.getId() == id; });

    if (it != students.end()) {
        cout << "Student ID already exists!\n";
        return false;
    }

    students.push_back(Student(id, name, gpa));
    cout << "Student added successfully.\n";
    return true;
}

bool StudentManager::removeStudent(int id) {
    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) { return s.getId() == id; });

    if (it == students.end()) {
        cout << "Student not found!\n";
        return false;
    }

    students.erase(it);
    cout << "Student removed successfully.\n";
    return true;
}

Student* StudentManager::searchStudent(int id) {
    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) { return s.getId() == id; });

    if (it == students.end()) return nullptr;
    return &(*it);
}

void StudentManager::displayAll() const {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }
    for (const auto& s : students)
        s.displayInfo();
}

void StudentManager::enrollStudentInCourse(int id, string course) {
    Student* s = searchStudent(id);
    if (!s) { cout << "Student not found!\n"; return; }

    if (s->enrollCourse(course))
        cout << "Enrolled successfully.\n";
    else
        cout << "Already enrolled in this course!\n";
}

void StudentManager::showCourses(int id) {
    Student* s = searchStudent(id);
    if (!s) { cout << "Student not found!\n"; return; }

    cout << "Courses for " << s->getName() << ":\n";
    for (const auto& c : s->getCourses())
        cout << "  - " << c << endl;
}

void StudentManager::sortByGpa() {
    sort(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.getGpa() > b.getGpa();
        });
    cout << "Students sorted by GPA (High to Low):\n";
    displayAll();
}