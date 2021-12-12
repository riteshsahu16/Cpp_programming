#include<iostream>
using namespace std;

int& max_two(int& x, int& y) {
	if (x > y)
		return x;
	else
		return y;
}

void ret_by_ref() {
	int a = 5, b = 7;
	int &res = max_two(a, b);
	res++;
	cout << "max : " << res << " a &  b: " << a << " " << b << endl;
}