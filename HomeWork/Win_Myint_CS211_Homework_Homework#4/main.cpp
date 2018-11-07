// main.cpp
// Win Thurein Myint
// Nov 1, 2018
// Homework#4
// CS211 Lab
#include "Date.h"
#include <string>
#include <iostream>
using namespace std;
int correspondDate(Date date);
int correspondInteger(int i);
int main()
{

    //user create array
    Date *datePouplateArray = NULL;
    int sizeDateList;

    cout << "Size of the Date List?" << endl;
    cin >> sizeDateList;

    datePouplateArray = new Date[sizeDateList];

    for (int i = 0; i < sizeDateList; i++)
    {
        Date date;
        date.input();
        datePouplateArray[i] = date;
    }

    int *intArr = NULL;
    intArr = new int[sizeDateList];
    for (int i = 0; i < sizeDateList; i++)
    {
        intArr[i] = correspondDate(datePouplateArray[i]);
    }

    for (int i = 0; i < sizeDateList; i++)
    {
        cout << "Print out inputed date" << endl;
        datePouplateArray[i].output();
        cout << "Corresponding Date : " << intArr[i] << endl
             << endl;
    }

    delete[] datePouplateArray; // When done, free memory pointed
    datePouplateArray = NULL;   // Clear a to prevent using invalid memory reference.
}

int correspondInteger(int i)
{
    if (i / 10 == 0)
    {
        return i;
    }
    else
    {
        return correspondInteger(i % 10 + i / 10);
    }
}

int correspondDate(Date date)
{
    int d = correspondInteger(date.getDay());
    int m = correspondInteger(date.getMonthNum());
    int y = correspondInteger(date.getYear());
    int sum = d + m + y;


    return correspondInteger(sum);
}
