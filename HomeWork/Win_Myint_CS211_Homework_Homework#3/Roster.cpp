//roster.cpp

#include "Roster.h"
#include <iostream>
#include <list>
using namespace std;

Roster::Roster(){
    courseName_ = "";
    courseCode_ = "";
    noOfCredit_ = 0;
    instructorName_ = "";
    arr_length = 0;
    arr_end = 0;
    arr_cap=MAX_CAPACITY;
}

Roster::Roster(string courseName, string courseCode, int noOfCredit, string instructorName,Student studentsList[MAX_CAPACITY])
{
    courseName_ = courseName;
    courseCode_ = courseCode;
    noOfCredit_ = noOfCredit;
    instructorName_ = instructorName;
    for (int i = 0; i < MAX_CAPACITY; ++i)
    {
        studentsList_[i] = studentsList[i];
    }
    arr_length = 0;
    arr_end = 0;
    arr_cap=MAX_CAPACITY;
}
Roster::Roster(string courseName, string courseCode, int noOfCredit, string instructorName)
{
    courseName_ = courseName;
    courseCode_ = courseCode;
    noOfCredit_ = noOfCredit;
    instructorName_ = instructorName;
    arr_length = 0;
    arr_end = 0;
    arr_cap=MAX_CAPACITY;
}
void Roster::setCourseName(string courseName)
{
    courseName_ = courseName;
}
void Roster::setCourseCode(string courseCode)
{
    courseCode_ = courseCode;
}
void Roster::setNoOfCredit(int noOfCredit)
{
    noOfCredit_ = noOfCredit;
}
void Roster::setInstructorName(string instructorName)
{
    instructorName_ = instructorName;
}

void Roster::setstudentsList(Student studentsList[MAX_CAPACITY])
{
   for (int i = 0; i < MAX_CAPACITY; ++i)
    {
        studentsList_[i] = studentsList[i];
    }
}

string Roster::getCourseName()
{
    return courseName_;
}
string Roster::getCourseCode()
{
    return courseCode_;
}
int Roster::getNoOfCredit()
{
    return noOfCredit_;
}
string Roster::getInstructorName()
{
    return instructorName_;
}
void Roster::getStudentList()
{
    for (int i = 0; i < arr_cap; ++i)
    {
        studentsList_[i].output();
    }
}

void Roster::output(){
    cout << "Course Name :" << courseName_ << endl;
    cout << "Course Code :" <<  courseCode_ << endl;
    cout << "Number of Credit :" <<  noOfCredit_ << endl;
    cout << "Instructor Name :" <<  instructorName_ << endl;
    getStudentList();
}

bool Roster::addStudnet(Student student)
{
    // Insert number at end.
    if (arr_length < MAX_CAPACITY)
    {
        studentsList_[arr_end] = student;
        arr_end = (arr_end + 1) % MAX_CAPACITY;
        arr_length++;
        arr_cap = arr_length;
        return true;
    }
    else
    {
        return false;
    }
}
bool Roster::deleteStudent(string studentLastName)
{
    bool a=false;
    unsigned int l=0, removed=0;
    for (int i = 0; i < arr_cap; ++i)
    {
        if (studentsList_[i].getLastName() != studentLastName)
        {
            studentsList_[l++] = studentsList_[i];
            
        }
        else
        {
            removed++;
            a=true;
        }
    }
    arr_cap -= removed;
    return a;
    /* for (int i = 0; i < MAX_CAPACITY; ++i)
    {
        if (studentsList_[i].getLastName() == studentLastName)
        {
            studentsList_[i] = {};
            return true;
        }
    }
    return false; */
}
Student *Roster::searchStudent(const string& studentLastName)
{
    for (int i = 0; i < arr_cap; ++i)
    {
        if (studentsList_[i].getLastName() == studentLastName)
        {
            return &studentsList_[i];
        }
    }
    return nullptr;
}