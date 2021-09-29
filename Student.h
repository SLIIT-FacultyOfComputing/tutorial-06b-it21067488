#pragma once
class student
{
private:
	int studentID;
	char name[20];

public:
	void assignDetails(int stdID, char pname[]);
	void display(int stdID, char pname);
};
