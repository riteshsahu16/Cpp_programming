#include<iostream>
using namespace std;

inline int square(int a) {return a * a;}

void inline_fuc() {
	cout << square(56) << endl;
}