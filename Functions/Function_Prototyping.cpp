#include<iostream>
using namespace std;

//Default Argument
int print_return(int a,  int is_return = 0) {
	cout << "square : " << a << endl;
	if (is_return)
		return a;
	else
		return -1;
}

//Variable Argument


//calling
void func_proto() {
	int res = print_return(5);
	cout << " return value " << res << endl;
	res = print_return(99, 1);
	cout << " return value " << res << endl;
}