// Win Thurein Myint
// October 2, 2-18
// Homework#2
// CS211 Lab

#include<iostream>
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
int main(){
    Student studentInitiConstructor;
    studentInitiConstructor.output();
    
    Student studentParamConstructor= Student("Cy","Lu",28,3.0,"July 20, 2018","Aug 11, 2018");
    studentParamConstructor.output();

    Student studentGetSet;
    studentGetSet.setLastName("Uzumaki");
    studentGetSet.setFirstName("Naruto");
    studentGetSet.setCredits(29);
    studentGetSet.setGPA(4.0);
    studentGetSet.setDateOfBirth("Feb 12, 2000");
    studentGetSet.setMatriculationDate("Oct 1, 2018");
    std::cout << " Last Name: " << studentGetSet.getLastName() << endl;
    std::cout << " First Name: " << studentGetSet.getFirstName() << endl;
    std::cout << " Standing: " << studentGetSet.getStanding() << endl;
    std::cout << " Credits: " << studentGetSet.getCredits() << endl;
    std::cout << " GPA: " << studentGetSet.getGPA() << endl;
    std::cout << " Date Of Birth: " << studentGetSet.getDateOfBirth() << endl;
    std::cout << " Matriculation Date: " << studentGetSet.getMatriculationDate() << endl << endl;
    
    Student studentInOut;
    studentInOut.input();
    studentInOut.output();
    
    
    return 0;
}
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


/*
 class Date
 {
 private:
 //Member Variables
 int day;
 string month;
 int year;
 public:
 //Console I/O Functions
 void input();
 void output();
 
 //Mutator Functions
 void setDay(int d);
 void setMonth(string m);
 void setYear(int y);
 
 //Accessor Functions
 int getDay();
 string getMonth();
 int getYear();
 };
 
 void Date::input()
 {
 std::cout << "Enter the day: ";
 std::cin >> day;
 std::cout << "Enter the month: ";
 std::cin >> month;
 std::cout << "Enter the year: ";
 std::cin >> year;
 }
 
 void Date::output()
 {
 std::cout << "The date is: " << day << " " << month << " " << year << endl;
 }
 
 void Date::setDay(int d)
 {
 day = d;
 }
 
 void Date::setMonth(string m)
 {
 month = m;
 }
 
 void Date::setYear(int y)
 {
 year = y;
 }
 
 int Date::getDay()
 {
 return day;
 }
 
 std::string Date::getMonth()
 {
 return month;
 }
 
 int Date::getYear()
 {
 return year;
 }
 */
