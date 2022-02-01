#include "Student.h"

Student::Student()
{
    id = 0;
    name = "";
    cgpa = 0;
}
Student::Student(int id, string name, float cgpa, Date doa)
{
    setID(id);
    setName(name);
    setCGPA(cgpa);
    setDOA(doa);
}
void Student::setID(int id)
{
    if (id > 0)
        this->id = id;
    else
        cerr << "Invalid id" << endl;
}
void Student::setName(string name)
{
    this->name = name;
}
void Student::setCGPA(float cgpa)
{
    if (cgpa >= 0 && cgpa <= 4.0f)
        this->cgpa = cgpa;
    else
        cerr << "invalid cgpa" << endl;
}
void Student::setDOA(Date doa)
{
    this->doA = doa;
}
int Student::getID()
{
    return id;
}
string Student::getName()
{
    return name;
}
float Student::getCGPA()
{
    return cgpa;
}
Date Student::getDOA()
{
    return doA;
}
void Student::display()
{
    cout << "ID    : " << id << endl;
    cout << "NAME  : " << name << endl;
    cout << "CGPA  : " << cgpa << endl;
    doA.display();
}
