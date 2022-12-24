// Employee.cpp

#include "Employee.h"

Employee::Employee()		// initialize all information
{
	name = "";
	ID = "";
	phoneNum = "";
	age = 0;
	gender = "";
	jobTitle = "";
	salary = "";
	hireDate.setDate(0, 0, 0);
}
//=====================================
//
//=====================================
Employee::Employee(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year)
{
	this->name = name;
	this->ID = ID;
	this->phoneNum = phoneNum;
	this->age = age;
	this->gender = gender;
	this->jobTitle = jobTitle;
	this->salary = salary;
	this->hireDate.setDate(month, day, year);
}
//=====================================
//
//=====================================
Employee::~Employee(){}
//=====================================
//
//=====================================
void Employee::setRecord(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year)
{
	this->name = name;
	this->ID = ID;
	this->phoneNum = phoneNum;
	this->age = age;
	this->gender = gender;
	this->jobTitle = jobTitle;
	this->salary = salary;
	this->hireDate.setDate(month, day, year);
}
//=====================================
//
//=====================================
void Employee::print()
{
	cout << "Name:  " << name << endl
		<< "ID:  " << ID << endl
		<< "Phone Number:  " << phoneNum << endl
		<< "Age:  " << age << endl
		<< "Gender:  " << gender << endl
		<< "Job Title:  " << jobTitle << endl
		<< "Salary:  $" << salary << endl
		<< "Hire Date:  ";

	hireDate.displayDate();
}
