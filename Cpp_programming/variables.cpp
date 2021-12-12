#include<iostream>

using namespace std;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void ref_var() {
	//Swap two numbers using reference variables	
	int a = 5, b = 7;
	cout << "before swap : " << a << " " << b << endl;
	swap(a, b);
	cout << "before swap : " << a << " " << b << endl;
}