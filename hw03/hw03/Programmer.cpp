// Programmer.cpp

#include "Programmer.h"

Programmer::Programmer()		// initialize all information
{
	departmentNum = 0;		
	supervisorName = "";	
	raisePercent = 0;		
	cIden = false;				
	javaIden = false;
}
//=====================================
//
//=====================================
Programmer::Programmer(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year, int departmentNum, string supervisorName, int raisePercent, bool cIden, bool javaIden):Employee(name, ID, phoneNum, age, gender, jobTitle, salary, month, day, year)
{
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->raisePercent = raisePercent;
	this->cIden = cIden;
	this->javaIden = javaIden;
}
//=====================================
//
//=====================================
Programmer::~Programmer() {}
//=====================================
//
//=====================================
void Programmer::setProg(int departmentNum, string supervisorName, int raisePercent, bool cIden, bool javaIden)
{
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->raisePercent = raisePercent;
	this->cIden = cIden;
	this->javaIden = javaIden;
}
//=====================================
//
//=====================================
void Programmer::print()
{
	cout << "Department Number:  " << departmentNum << endl
		<< "Supervisor's Name:  " << supervisorName << endl
		<< "Raise %:  " << raisePercent << endl
		<< "C++ Knowledge:  ";

	if (cIden == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl << "Java Knowledge:  ";
	if (javaIden == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
}