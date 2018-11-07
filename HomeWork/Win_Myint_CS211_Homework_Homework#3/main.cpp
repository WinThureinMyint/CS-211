// main.cpp
// Win Thurein Myint
// October 23, 2018
// Homework#3
// CS211 Lab
#include "Student.h"
#include "Roster.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
        Student student1;
        Student student2 = Student("Cy", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        Student student3;
        student3.setLastName("Uzumaki");
        student3.setFirstName("Naruto");
        student3.setCredits(29);
        student3.setGPA(4.0);
        student3.setDateOfBirth("Feb 12, 2000");
        student3.setMatriculationDate("Oct 1, 2018");
        Student student4 = Student("Kelvin", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        Student student5 = Student("Alan", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        Student student6 = Student("Danny", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        Student student7 = Student("San", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        Student student8 = Student("Zeno", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        Student student9 = Student("Luffy", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        Student student10 = Student("Meliods", "Lu", 28, 3.0, "July 20, 2018", "Aug 11, 2018");
        string courseName_;
        string courseCode_;
        int noOfCredit_;
        string instructorName_;
        Student studentsList_[MAX_CAPACITY];

        Student studentList[MAX_CAPACITY] = {student1, student2, student3, student4, student5, student6, student7, student8, student9, student10};

        Roster cpp;
        cpp.setCourseName("C++ in OOP");
        cpp.setCourseCode("CS211");
        cpp.setNoOfCredit(3);
        cpp.setInstructorName("Christopher Sands");
        cpp.setstudentsList(studentList);
        cout << "Output all students from " << cpp.getCourseName() << " course" << endl;
        cpp.getStudentList();
        cout << "Output detail of " << cpp.getCourseName() << " course" << endl;
        cpp.output();

        Roster java = Roster("Java", "CS212", 3, "Kim song");
        java.addStudnet(student1);
        java.addStudnet(student2);
        java.addStudnet(student3);
        java.addStudnet(student4);
        java.addStudnet(student5);
        java.addStudnet(student6);
        java.addStudnet(student7);
        java.addStudnet(student8);
        java.addStudnet(student9);
        java.addStudnet(student10);
        cout << "Output all students from " << java.getCourseName() << " course" << endl;
        java.getStudentList();
        cout << "Output detail of " << java.getCourseName() << " course" << endl;
        java.output();

        Student &search = *java.searchStudent("Meliods");
        cout << "Search student with last naem Meliods: " << endl;
        search.output();

        bool a=java.deleteStudent("Meliods");
        if(a){
                cout<< "Delete Successful" << endl;
        }else{
                cout<< "Cannot find to delete" << endl;
        }
        cout << "After delete student with last name Meliods: " << endl;
        java.output();

        /* Student &search1 = *java.searchStudent("Meliods");
        cout << "Search student with last naem Meliods After delete: " << endl;
        search1.output(); */
        return 0;
}