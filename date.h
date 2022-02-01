#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int, int, int);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay();
    int getMonth();
    int getYear();
    void display();
    bool operator==(const Date&);
    bool operator!=(const Date&);

};


#pragma once
