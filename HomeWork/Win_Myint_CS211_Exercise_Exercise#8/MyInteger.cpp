#include "MyInteger.h"
#include "iostream"
#include "cmath"
MyInteger::MyInteger()

{

    myInteger_ = 0;
}

MyInteger::MyInteger(int myInteger)

{

    myInteger_ = myInteger;
}

int MyInteger::getInteger() const

{

    return myInteger_;
}

void MyInteger::setInteger(int inputValue)

{

    myInteger_ = inputValue;
}

int MyInteger::operator[](int index)
{

    int size = 0;
    int myinteger = myInteger_;
    do
    {
        myinteger = myinteger / 10;
        size++;
    } while (myinteger != 0);
    
    if (index >= size)
    {
        return -1;
    }
    int i=pow(10.0, index + 1);
    int result = (myInteger_%i) / (i / 10);
    return result; 
}