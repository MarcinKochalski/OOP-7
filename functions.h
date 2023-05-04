#ifndef UNTITLED_FUNCTIONS_H
#define UNTITLED_FUNCTIONS_H
#include <iostream>
#include "class.h"
using namespace std;
void input_date(date &date)
{
    int x;
    cout <<"Enter day : ";
    cin >> x;
    cout << endl;
    date.day = x;
    cout <<"Enter month : ";
    cin >> x;
    cout << endl;
    date.month = x;
    cout <<"Enter year : ";
    cin >> x;
    cout << endl;
    date.year = x;
}

bool check_date(date &date)
{
    if (date.month < 1 || date.month > 12)

    {
        cout << "Wrong month value. Enter a value between 1 and 12." << endl;
        return false;
    }

    if (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12)
    {

        if (date.day < 1 || date.day > 31)
        {
            cout << "Wrong day value for month " << date.month << ". Enter a value between 1 and 31." << endl;
            return false;
        }
    }
    if (date.month == 4 || date.month == 6 || date.month == 8 || date.month == 9 || date.month == 11)
    {

        if (date.day < 1 || date.day > 30)
        {
            cout << "Wrong day value for month " << date.month << ". Enter a value between 1 and 30." << endl;
            return false;
        }
    }



    if (date.month == 2)
    {
        if (date.day > 29)
        {
            cout << "February can only have maximum 29 days on a leap year." << endl;
            return false;
        }
        else if (date.day == 29 && (date.year % 4 != 0 || (date.year % 100 == 0 && date.year % 400 != 0)))
        {
            cout << "Wrong day value. The year is not a leap year." << endl;
            return false;
        }
    }

    return true;
}

#endif
