// Student.cpp


#include "Student.h"
#include<iostream>
using namespace std;

Student::Student() {
    lastName_ = "Myint" ;
    firstName_ = "Win";

    credits_ = 67;
    standing_ = standingCalu(credits_);
    GPA_ = 3.5;
    dateOfBirth_ = "July 5, 1990";
    matriculationDate_ = "Oct 22, 2018";
}

Student::Student(string lastName, string firstName, int credits, double GPA, string dateOfBirth,string matriculationDate){
    lastName_ = lastName ;
    firstName_ = firstName;
    credits_ = credits;
    standing_ = standingCalu(credits_);
    GPA_ = GPA;
    dateOfBirth_ = dateOfBirth;
    matriculationDate_ = matriculationDate;
}


string Student::standingCalu(int credits){
    
    if(credits>=0 && credits<25){
        return "Freshman";
    }else if(credits>=25 && credits<55){
        return "Sophomore";
    }else if(credits>=55 && credits<89){
        return "Junior";
    }else if(credits>=89){
        return "Senior";
    }else{
        return "Not Avaliable";
    }
}
void Student::input()
{
    std::cout << " Enter Last Name: ";
    std::cin >> firstName_;
    std::cout << " Enter First Name: ";
    std::cin >> lastName_;
    std::cout << " Enter Credits: ";
    std::cin >> credits_;
    std::cout << " Enter GPA: ";
    std::cin >> GPA_;
    standingCalu(credits_);
    std::cout << " Enter Date Of Birth: ";
    std::cin >> dateOfBirth_;
    std::cout << " Enter Matriculation Date: ";
    std::cin >> matriculationDate_;
}

void Student::output()
{
    std::cout << " Last Name: " << lastName_ << endl;
    std::cout << " First Name: " << firstName_ << endl;
    std::cout << " Standing: " << standing_ << endl;
    std::cout << " Credits: " << credits_ << endl;
    std::cout << " GPA: " << GPA_ << endl;
    std::cout << " Date Of Birth: " << dateOfBirth_ << endl;
    std::cout << " Matriculation Date: " << matriculationDate_ << endl << endl;
}

void Student::setLastName(string lastName)
{
    lastName_=lastName;
}
void Student::setFirstName(string firstName){
    firstName_=firstName;
}

void Student::setCredits(int credits){
    standing_ = standingCalu(credits);
    credits_ = credits;
    
}
void Student::setGPA(double GPA){
    GPA_=GPA;
}
void Student::setDateOfBirth(string dateOfBirth){
    dateOfBirth_=dateOfBirth;
}
void Student::setMatriculationDate(string matriculationDate){
    matriculationDate_=matriculationDate;
}

string Student::getLastName(){
    return lastName_;
}
string Student::getFirstName(){
    return firstName_;
}
string Student::getStanding(){
    return standing_;
}
int Student::getCredits(){
    return credits_;
}
double Student::getGPA(){
    return GPA_;
}
string Student::getDateOfBirth(){
    return dateOfBirth_;
}
string Student::getMatriculationDate(){
    return matriculationDate_;
}