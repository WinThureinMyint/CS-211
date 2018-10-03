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
	
	//constrctor
	Student();
	Student(string lastName, string firstName, int credits, double GPA_, string dateOfBirth,string matriculationDate);

	string standingCalu(int credits);

	//Accessor
	string getLastName;
	string getFirstName;
	int getStanding;
	int getCredits;
	double getGPA;
	string getDateOfBirth;
	string getMatriculationDate;

	//Mutator
	string setLastName;
	string setFirstName;
	int setStanding;
	int setCredits;
	double setGPA;
	string setDateOfBirth;
	string setMatriculationDate;

	//Console I/O Functions
	void input();
	void output();
}

Student::Student(void) {
	 lastName_ = "Myint" ;
	 firstName_ = "Win";
	 standing_ = 3;
	 credits_ = 67;
	 GPA_ = 3.5;
	 dateOfBirth_ = "July 5 1990";
	 matriculationDate_ = "Oct 22 2018";
}

Student::Student(string lastName, string firstName, int credits, double GPA_, string dateOfBirth,string matriculationDate){
	 lastName_ = lastName ;
	 firstName_ = firstName;
	 standing_ = standing;
	 credits_ = credits;
	 GPA_ = GPA;
	 dateOfBirth_ = dateOfBirth;
	 matriculationDate_ = matriculationDate;
}


string Student::standingCalu(int credits){
	
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