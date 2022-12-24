// SoftwareArchitect.cpp

#include "SoftwareArchitect.h"

SoftwareArchitect::SoftwareArchitect()  // initialize all information
{
	departmentNum = 0;
	supervisorName = "";
	raisePercent = 0;
	experienceYear = 0;
}
//=====================================
//
//=====================================
SoftwareArchitect::SoftwareArchitect(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year, int departmentNum, string supervisorName, int raisePercent, int experienceYear) :Employee(name, ID, phoneNum, age, gender, jobTitle, salary, month, day, year)
{
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->raisePercent = raisePercent;
	this->experienceYear = experienceYear;
}
//=====================================
//
//=====================================
SoftwareArchitect::~SoftwareArchitect() {}
//=====================================
//
//=====================================
void SoftwareArchitect::setSoftArt(int departmentNum, string supervisorName, int raisePercent, int experienceYear)
{
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->raisePercent = raisePercent;
	this->experienceYear = experienceYear;
}
//=====================================
//
//=====================================
void SoftwareArchitect::print()
{
	cout << "Department Number:  " << departmentNum << endl
		<< "Supervisor's Name:  " << supervisorName << endl
		<< "Raise %:  " << raisePercent << endl
		<< "Years of experience:  " << experienceYear << endl;
}