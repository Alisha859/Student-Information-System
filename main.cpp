#include<iostream>
#include"student.h"
using namespace std;
int main() {
	student s1;   //default constructor called
 //parameterized constructor
	student s2("Alisha", 20, 23, 3.7);
	student s3("Haider", 21, 12, 2.5);
	student s4("Zaidi", 19, 15, 3.8);

	s1.set_name("Syeda");
	s1.set_age(19);
	s1.set_roll_no(34);
	s1.set_gpa(3.8);

	//fun to display students information
	cout << "----information of student 1----" << endl;
	s2.display_info();
	s2.calculate_grade(); 

	cout << "----information of student 2----" << endl;
	s3.display_info();
	s3.calculate_grade();
	
    cout << "----information of student 3----" << endl;
	s4.display_info();
	s4.calculate_grade();

    cout << "----information of student 4----" << endl;
	s1.display_info();
	s1.calculate_grade();
	return 0;
	system("pause");
}
