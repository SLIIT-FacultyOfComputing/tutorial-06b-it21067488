#include "student.h"
#include<iostream>
#include<cstring>
using namespace std;



void student::assignDetails(int stdID, char pname[])
{
	studentID = stdID;
	strcpy_s(name, pname);
}

void student::display(int stdID, char pname)
{
	cout << "Student ID is : " << studentID << endl;
	cout << "Student Name is : " << name << endl;
}