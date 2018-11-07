//Name
//Date
//Exercise or Project Number
//CS211 Lab

#include <iostream>
#include "dTime.h"

int main()
{
	int *p1, *p2, v1, v2;
	
	v1 = 20;
	p1 = &v1;
	//The & operator will provide the address of variable v1
	//Line 13 sets the pointer variable p1 equal to a pointer that
	//points at variable v1.
	
	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "*p1 = " << *p1 << std:: endl;
	std::cout << "p1 = " << p1 << std:: endl;
	
	//The * operator will provide the variable pointed to by your pointer
	//So saying *p1 in your code, since p1 points to v1, is as good as saying v1.
	
	*p1 = 42;
	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "*p1 = " << *p1 << std:: endl;
	
	p2 = p1;
	//Pointer assignment like so will have p2 pointing at the variable pointed to
	//by p1.
	
	std::cout << "After p2 = p1, the value of *p2 is... " << *p2 << std:: endl;
	
	
	p2 = &v2;
	v2 = 30;
	
	*p2 = *p1;
	//Line 39 is equivalent to typing v2 = v1;
	std::cout << "After *p2 = *p1, the value of *p2 is... " << *p2 << std::endl;
	
	//Pointers can be used to represent nameless variables.
	p1 = new int;
	//This variable can be referenced by *p1.
	
	std::cout << "Enter a value for p1: ";
	std::cin >> *p1;
	*p1 += 7;
	std::cout << "After adding 7 to your number, *p1 = " << *p1 << std::endl;
	
	//Variables that are created using the new operator as shown above are called
	//DYNAMIC VARIABLES because they are created/deleted during the programs runtime.
	
	//You can dynamically allocate objects of a class.
	//If you do not specify a constructor for these objects, they will use the default.
	DigitalTime *p3 = new DigitalTime(4, 30);
	
	std::cout << "*p3 = " << *p3 << std::endl;
	
	//When a pointer should point to nothing, use nullptr
	int *p4 = nullptr;
	
	//To free up space in the heap that is no longer by your program, use the
	//delete operator. This will eliminate the variable that a pointer points to in
	//the heap and returns it to the heap manager so that it may be recycled.
	
	return 0;
}
