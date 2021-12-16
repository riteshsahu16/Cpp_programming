#include<iostream>
using namespace std;

void point_arith() {
	int a = 5;
	int* p = &a;
	//Pointer Arithmetic

	cout << p << endl;		//address of a
	cout << p+1 << endl;	//4 byte ahead of address of a
	cout << p-1 << endl;	//4 byte behind of address of a
	//cout << p * 3 << end;		ERROR : Cannot perform multiplication/division with pointer

}