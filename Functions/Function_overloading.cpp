#include<iostream>
using namespace std;

int add(int a, int b);
double add(double a, double b);
double add(double a, double b, double c);


//calling 
void func_ovrl() {
	cout << add(4.0, 6.9, 2.0) << endl;
	cout << add(4, 6) << endl;
}





int add(int a, int b)
{
	return a+b;
}

int add(int a, int b, int c)
{
	return a+b+c;
}

double add(double a, double b)
{
	return a+b;
}

double add(double a, double b, double c)
{
	return a+b+c;
}

