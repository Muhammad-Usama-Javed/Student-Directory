#include "Student.h"
class Directory
{
private:
    Student studs[100];
    int capacity;
    int currentNoOfStudents;
public:
    Directory();
    void add(Student);
    int getDirSize();
    void displayAll();
    bool search(int);
    bool deleteStudent(int);
    void update(int);
    void sortStudentsByCGPA();

};
#pragma once
