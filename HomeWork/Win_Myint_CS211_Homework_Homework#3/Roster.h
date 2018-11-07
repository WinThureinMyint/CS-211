// Roster.h

#ifndef ROSTER_H
#define ROSTER_H
#define MAX_CAPACITY 10

#include "Student.h"
#include <string>

using namespace std;


class Roster{
private:
    string courseName_;
    string courseCode_;
    int noOfCredit_;
    string instructorName_;
    Student studentsList_[MAX_CAPACITY];
    //Student** studentsList_ = new Student*[MAX_CAPACITY];
    /* unsigned int arr_length = 0;
    unsigned int arr_end = 0;
    unsigned int arr_cap=MAX_CAPACITY; */
    unsigned int arr_length;
    unsigned int arr_end;;
    unsigned int arr_cap;

public:
    
    // constrctor
    Roster();
    Roster(string courseName, string courseCode, int noOfCredit, string instructorName,Student studentsList[MAX_CAPACITY]);
    Roster(string courseName, string courseCode, int noOfCredit, string instructorName);
    
    //C onsole I/O Functions
    //void input();
    void output();
    
    // Mutator
    void setCourseName(string courseName);
    void setCourseCode(string courseCode);
    void setNoOfCredit(int noOfCredit);
    void setInstructorName(string instructorName);
    void setstudentsList(Student studentsList[MAX_CAPACITY]);
    
     // Accessor
    string getCourseName();
    string getCourseCode();
    int getNoOfCredit();
    string getInstructorName();
    void getStudentList();

    //logic
    bool addStudnet(Student student);
    bool deleteStudent(string studentLastName);
    Student *searchStudent(const string& studentLastName);
};

#endif