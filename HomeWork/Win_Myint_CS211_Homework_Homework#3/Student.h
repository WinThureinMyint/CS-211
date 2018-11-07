// Student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student{
private:
    string lastName_;
    string firstName_;
    string standing_;
    int credits_;
    double GPA_;
    string dateOfBirth_;
    string matriculationDate_;
public:
    
    // constrctor
    Student();
    Student(string lastName, string firstName, int credits, double GPA_, string dateOfBirth,string matriculationDate);
    
    string standingCalu(int credits);
    
    //C onsole I/O Functions
    void input();
    void output();
    
    // Mutator
    void setLastName(string lastName);
    void setFirstName(string firstName);
  //void setStanding(string standing);
    void setCredits(int credits);
    void setGPA(double GPA);
    void setDateOfBirth(string dateOfBirth);
    void setMatriculationDate(string matriculationDate);
    
    // Accessor
    string getLastName();
    string getFirstName();
    string getStanding();
    int getCredits();
    double getGPA();
    string getDateOfBirth();
    string getMatriculationDate();
    

};

#endif