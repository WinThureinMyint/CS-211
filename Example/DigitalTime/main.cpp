//This is the application file main.cpp which uses the DigitalTime class

#include <iostream>
#include "dTime.h"

int main()
{
	DigitalTime clock, oldClock;
	
	std::cout	<< "You may write midnight as either 0:00 or 24:00,\n"
				<< "but I will always write it as 0:00.\n"
				<< "Enter the time in 24-hour notation: ";
	std::cin	>> clock;
	
	oldClock = clock;
	clock.advance(15);
	if(clock == oldClock) std::cout << "Something is wrong.";
	
	std::cout << "You entered " << oldClock << std::endl;
	std::cout << "15 minutes later the time will be " << clock << std::endl;
	
	clock.advance(2, 15);
	std::cout 	<< "2 hours and 15 minutes after that\n"
				<< "the time will be " << clock << std::endl;
	
	return 0;
}
