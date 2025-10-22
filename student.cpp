#include "student.h"
#include<string>
using namespace std;
//default constructor used
student::student() {
	name = "unknown";
	age = 0;
	roll_no = 0;
	gpa = 0;
	cout << "default constructor called:object created!" << endl;
}
//parametrized constructor used
	student::student (string n, int a, int r, float g) {
		name = n;
		age = a;
		roll_no = r;
		gpa = g;
}
	//destructor used
	student::~student() {
		cout << "destructor called:object destroyed!" << endl;
	}
	//setter used
	void student::set_name(string n) {
		name = n;
	}
	void student::set_age(int a) {
		age = a;
	}
	void student::set_roll_no(int r) {
		roll_no = r;
	}
	void student::set_gpa(float g) {
		gpa=g;
	}
	//getter used
	string student::get_name() {
		return name;
	}
	int student::get_age() {
		return age;
	}
	int student::get_roll_no() {
		return roll_no;
	}
	float student::get_gpa() {
		return gpa;
	}
	//fun for displaying student info
	void student::display_info() {
		cout << "name\t" << name << endl;
		cout << "age is\t" << age << endl;
		cout << "roll no is\t" << roll_no << endl;
		cout << "gpa is\t" << gpa << endl;
	}
	//function for displaying result
	void student::calculate_grade() {
		if (gpa >= 3.7) {
			cout << "A grade" << endl;
		}
		else if (gpa >= 3) {
			cout << "B grade" << endl;
		}
		else if (gpa >= 2.5) {
			cout << "C grade" << endl;
		}
		else if (gpa >= 1.5) {
			cout << "D grade" << endl;
		}
		else {
			cout << "F grade" << endl;
		}
	}
