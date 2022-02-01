#include "Directory.h"
#include<string>
    
int main()
{
    Directory dir;
    int choice;
    while (true)
    {
        cout << "Enter" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Print current size" << endl;
        cout << "3. Display all students" << endl;
        cout << "4. search student by id" << endl;
        cout << "5. Delete record" << endl;
        cout << "6. Sort by CGPA" << endl;
        cout << "7. Update record" << endl;
        cout << "8. Exit"<<endl;
        int c1;
        cin >> choice;
        if (choice == 1)
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
            Date doa(d, m, y);
            Student s(id, n, cgpa, doa);
            dir.add(s);
        }
        else if (choice == 2)
        {
            cout << "Current size of directory : " << dir.getDirSize() << endl;
        }
        else if (choice == 3)
        {

            dir.displayAll();
        }
        else if (choice == 4)
        {
            int id;
            cout << "Enter the id which you want to search : ";
            cin >> id;
            bool flag = dir.search(id);
            if (flag == false)
            {
                cout << "Student not found" << endl;
            }
        }
        if (choice == 5)
        {
            int id;
            cout << "Enter the id which you want to delete : ";
            cin >> id;
            bool flag = dir.deleteStudent(id);
            if (flag == false)
            {
                cout << "Student not found" << endl;
            }
        }
        else if (choice == 6)
        {
            dir.sortStudentsByCGPA();
        }
        else if (choice == 7)
        {
            int id;
            cout << "Enter the id which you want to update :" << endl;
            cin >> id;
            dir.update(id);
        }
    }

    return 0;
}
