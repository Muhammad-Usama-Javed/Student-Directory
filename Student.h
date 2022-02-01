#include "Date.h"
class Student
{
private:
    int id;
    string name;
    float cgpa;
    Date doA;
public:
    Student();
    Student(int, string, float, Date);
    void setID(int);
    void setName(string);
    void setCGPA(float);
    void setDOA(Date);
    int getID();
    string getName();
    float getCGPA();
    Date getDOA();
    void display();

};

#pragma once
