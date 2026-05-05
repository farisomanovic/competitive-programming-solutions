#include <iostream>
#include <ctime>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() 
{
    int day, month, year;
    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) 
    {
        cout << "Invalid date!" << endl;
        return 0;
    }
    if (month == 2) 
    {
        if (isLeapYear(year) && day > 29) 
        {
            cout << "Invalid date!" << endl;
            return 0;
        }
        if (!isLeapYear(year) && day > 28) 
        {
            cout << "Invalid date!" << endl;
            return 0;
        }
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
    {
        cout << "Invalid date!" << endl;
        return 0;
    }
    day++;
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day > 31) 
    {
        day = 1;
        month++;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
    {
        day = 1;
        month++;
    } else if (month == 2) 
    {
        if (isLeapYear(year) && day > 29) 
        {
            day = 1;
            month++;
        }
        if (!isLeapYear(year) && day > 28) 
        {
            day = 1;
            month++;
        }
    } else if (month == 12 && day > 31) 
    {
        day = 1;
        month = 1;
        year++;
    }
    cout << "Next day's date is: " << day << "-" << month << "-" << year << endl;
    return 0;
}