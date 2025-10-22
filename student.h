#pragma once
#include<iostream>
#include<string>
using namespace std;
class student {
private:
	//encapsulation
	string name;
	int age,roll_no; 
	float gpa;
public:
	student();   //default constructor used
	student(string n, int a, int r, float g);  //parametrized constructor used

	//setter used for seting name,age,roll no and gpa
	void set_name(string n);
	void set_age(int a);
	void set_roll_no(int r);
	void set_gpa(float g);

	//getter used for geting names,age,roll no ,gpa
	string get_name();
	int get_age();
	int get_roll_no();
	float get_gpa();

	void display_info();    // display fun that will display student info
	void calculate_grade();  // for calculating grade
	~student();    //destrructor used
  };
