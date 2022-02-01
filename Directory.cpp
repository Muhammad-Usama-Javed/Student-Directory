#include "Directory.h"
#include<string>
Directory::Directory()
{
    capacity = 100;
    currentNoOfStudents = 0;
}
void Directory::add(Student s)
{
    if (currentNoOfStudents < capacity)
    {
        studs[currentNoOfStudents] = s;
        currentNoOfStudents++;
    }
    else
    {
        cerr << "Capacity full" << endl;
    }
    
}
int Directory::getDirSize()
{
    return currentNoOfStudents;
}
void Directory::displayAll()
{
    for (int i = 0; i < currentNoOfStudents; i++)
    {
        studs[i].display();
    }
}
bool Directory::search(int idd)
{
    for (int i = 0; i < currentNoOfStudents; i++)
    {
        if (studs[i].getID() == idd)
        {
            studs[i].display();
            return true;
        }
    }
    return false;
}
bool Directory::deleteStudent(int idd)
{
     for (int i = 0; i < currentNoOfStudents; i++)
     {

        if (studs[i].getID() == idd)
        {

            for (int j = i; j < currentNoOfStudents - 1; j++)
            {

                studs[i] = studs[i + 1];
            }
        }
        currentNoOfStudents--;
        return true;
     }
}
void Directory::update(int idd)
{
    for (int i = 0; i < currentNoOfStudents; i++)
    {
        if (studs[i].getID() == idd)
        {
            int d, m, y;
            int id;
            string n;
            float cgpa;
            do {
                cout << "Student id : ";
                cin >> id;
            } while (id <= 0);

            cout << "student name : ";
            cin.ignore();
            getline(cin, n);
            cout << "student cgpa : ";
            cin >> cgpa;
            cout << "Admission day : ";
            cin >> d;
            cout << "admission month : ";
            cin >> m;
            cout << "Admission year : ";
            cin >> y;
            studs[i].setID(id);
            studs[i].setName(n);
            studs[i].setCGPA(cgpa);
            Date doa(d, m, y);
            studs[i].setDOA(doa);
        }  
    }
}
void Directory::sortStudentsByCGPA()
{
     for (int j = 0; j < currentNoOfStudents + 1; j++)
    {
        
        for (int i = 0; i < currentNoOfStudents - 1; i++)
        {
            if (studs[i].getCGPA() < studs[i + 1].getCGPA())
            {
                Student c;
                c = studs[i+1];
                studs[i + 1]= studs[i];
                studs[i] = c;
            }
        }
    }
    for (int i = 0; i < currentNoOfStudents; i++)
    {
        studs[i].display();
    }
}


