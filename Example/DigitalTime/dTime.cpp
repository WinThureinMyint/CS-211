//This is the implementation file dTime.cpp of the class DigitalTime
//The interface for this class is in header file dTime.h

#include <iostream>
#include <cctype>
#include <cstdlib>
#include "dTime.h"
using namespace std;

DigitalTime::DigitalTime(int theHour, int theMinute)
{
	if(theHour < 0 || theHour > 24 || theMinute < 0 || theMinute > 59)
	{
		std::cout << "Illegal argument to DigitalTime constructor";
		std::exit(1);
	}
	else
	{
		hour = theHour;
		min = theMinute;
	}
	
	if(hour == 24) hour = 0;
}

DigitalTime::DigitalTime()
{
	hour = 0;
	min = 0;
}

int DigitalTime::getHour() const {return hour;}
int DigitalTime::getMinute() const {return min;}

void DigitalTime::advance(int minutesAdded)
{
	int sumMin = min + minutesAdded;
	min = sumMin%60;
	int sumHour = sumMin/60;
	hour = (hour+sumHour)%24;
}

void DigitalTime::advance(int hoursAdded, int minutesAdded)
{
	hour = (hour + hoursAdded)%24;
	advance(minutesAdded);
}

bool operator == (const DigitalTime& time1, const DigitalTime& time2)
{
	return(time1.hour == time2.hour && time1.min == time2.min);
}

std::istream& operator >> (std::istream& ins, DigitalTime& theObject)
{
	DigitalTime::readHour(theObject.hour);
	DigitalTime::readMinute(theObject.min);
	return ins;
}

std::ostream& operator << (std::ostream& outs, const DigitalTime& theObject)
{
	outs << theObject.hour << ':';
	if(theObject.min < 10) outs << '0';
	outs << theObject.min;
	return outs;
}

int DigitalTime::digitToInt(char c)
{
	return static_cast<int>(c) - static_cast<int>('0');
}

void DigitalTime::readHour(int& theHour)
{
	char c1,c2;
	std::cin >> c1 >> c2;
	if(!(isdigit(c1) && (isdigit(c2) || c2 == ':')))
	{
		std::cout << "Illegal input to readHour\n";
		exit(1);
	}
	if(isdigit(c1) && c2 == ':')
	{
		theHour = DigitalTime::digitToInt(c1);
	}
	else
	{
		theHour = DigitalTime::digitToInt(c1)*10 + DigitalTime::digitToInt(c2);
		std::cin >> c2;
		if(c2 != ':')
		{
			std::cout << "Illegal input to readHour\n";
			exit(1);
		}
	}
	if(theHour == 24) theHour = 0;
	if(theHour < 0 || theHour > 23)
	{
		std::cout << "Illegal input to readHour\n";
		exit(1);
	}
}

void DigitalTime::readMinute(int& theMinute)
{
	char c1,c2;
	std::cin >> c1 >> c2;
	if(!(isdigit(c1) && isdigit(c2)))
	{
		std::cout << "Illegal input to readMinute\n";
		exit(1);
	}
	theMinute = digitToInt(c1)*10 + digitToInt(c2);
	if(theMinute < 0 || theMinute > 59)
	{
		std::cout << "Illegal input to readMinute\n";
		exit(1);
	}
}
