#include<iostream>
using namespace std;

void point_var() {
	int a = 5;
	int* p = &a;
	cout << *p << endl;		// value at address of a
	cout << p << endl;		// address of a  
	cout << &p << endl;		// address of pointer var 'p'
}