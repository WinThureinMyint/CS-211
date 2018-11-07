#include "MyInteger.h"
#include <iostream>
using namespace std;

int main()
{
    MyInteger myInteger;
    myInteger.setInteger(289);
    int i;
    cout << "Enter Integer"<<endl;
    cin >> i;
    myInteger.setInteger(i);
    cout << "MyInteger number : " << myInteger.getInteger() << endl;
    cout << "Enter the intex to get number>>";
    cin >> i;
    cout << "The digit is: " << myInteger[i] << endl;
    return 0;
}