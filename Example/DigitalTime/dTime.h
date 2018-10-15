//This is the header file dTime.h
//It is the interface for the class DigitalTime
//The time is considered in 24-hour notation

#include <iostream>

class DigitalTime
{
private:
	//member variables
	int hour;
	int min;
	
	static int digitToInt(char c);
	//c is a digit from '0' to '9'
	//returns the integer for the digit
	//(since the ASCII value of '0' is not 0)
	
	static void readHour(int& theHour);
	//Next input to be read from console should be
	//in time notation. 9:45 for example.
	//The hour will be set to the hour part of the
	//time, and the colon will be discarded.
	
	static void readMinute(int& theMinute);
	//Reads the minute from the console after readHour
	//has read the hour and discarded the colon.
	
public:
	DigitalTime();
	//Initializes time to 0:00
	DigitalTime(int theHour, int theMinute);
	
	int getHour() const;
	int getMinute() const;
	
	//advance functions change the time to the time hoursAdded later
	//and minutesAdded later. Ex. advance(4, 25); will make 9:45 ---> 14:10
	void advance(int minutesAdded);
	void advance(int hoursAdded, int minutesAdded);
	
	//friend functions allow us to overload operators and more easily use the class
	friend bool operator == (const DigitalTime& time1, const DigitalTime& time2);
	friend std::istream& operator >> (std::istream& ins, DigitalTime& theObject);
	friend std::ostream& operator << (std::ostream& outs, const DigitalTime& theObject);
};
