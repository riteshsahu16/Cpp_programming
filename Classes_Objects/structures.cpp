#include<iostream>
using namespace std;

struct student {
	int rolllno;
	const char *name;
	std::string school;
	void study() {
		cout << "student is studying" << endl;
	}
};

void struct_exm()
{
	struct student s1;
	s1.rolllno = 9;
	s1.name = "ritesh";
	s1.study();
	s1.school = "DAVV";
	cout << s1.rolllno << endl;
	cout << s1.name[0] << endl;
	cout << s1.school << endl;
}