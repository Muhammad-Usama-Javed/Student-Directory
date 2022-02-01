#include "Date.h"

Date::Date()
{
    day = month = year = 0;

}
Date::Date(int day, int month, int year)
{
    setDay(day);
    setMonth(month);
    setYear(year);
}
void Date::setDay(int day)
{
    if (day > 0 && day <= 31)
        this->day = day;
    else
        cerr << "ok dear you have a bad day" << endl;
}
void Date::setMonth(int month)
{
    if (month > 0 && month <= 12)
    {
        this->month = month;
    }
    else
    {
        cerr << "invalid value of month" << endl;
    }
}
void Date::setYear(int year)
{
    if (year >= 2014 && year <= 2050)
        this->year = year;
    else
        cerr << "invalid value of year" << endl;
}
int Date::getDay()
{
    return day;
}
int Date::getMonth()
{
    return month;
}
int Date::getYear()
{
    return year;
}
void Date::display()
{
    cout << "Date of Admission : " << day << "/" << month << "/" << year << endl;
}
bool Date::operator==(const Date& d)
{
    if (day == d.day && month == d.month && year == d.year)
        return true;
    else
        return false;
}
bool Date::operator!=(const Date& d)
{
    if (day != d.day || month != d.month || year != d.year)
        return true;
    else
        return false;
}

