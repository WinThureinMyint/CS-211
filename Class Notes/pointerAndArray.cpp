#include <iostream>
using namespace std;
int* doubler(int* a, int size);

void print(int* a, int size);

int main(){
	const int SIZE=5;

	int array[SIZE]={1,2,3,4,5};

	print(array, SIZE);

	int* array2 = doubler(array,SIZE);

	print(array2,SIZE);

	delete [] array2; // to prevent memory leak[]

	return 0;
}

void print(int* a,int size){
	for(int i =0;i<size;i++){
		cout <<  a[i] << " " ;

	}
	cout << endl;
}

int* doubler(int* a, int size){
	//int b[size]; change to
	//static int b[5]; -< warking but not proberway

	int* b=new int[size];
	for(int i =0;i<size;i++){
		b[i]=a[i]*2;

	}
	return b;
}