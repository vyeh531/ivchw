// Employee.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #3	: Class Constructors, Inheritance & Init
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/12/2021
*********************************************************/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Employee
{
private:
	string name;		// Employee¡¦s name
	string ID;			// Employee¡¦s ID
	string phoneNum;	// Employee¡¦s phone number
	int age;			// Employee¡¦s age
	string gender;		// Employee¡¦s gender
	string jobTitle;	// Employee¡¦s job title
	string salary;		// Employee¡¦s salary
	Date hireDate;		// Employee¡¦s hire date
public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	Employee();
	//=================================================================================
	//
	//====OVERLOAD CONSTRUCTOR=========================================================
	// This function set every variable from declaring to the data mamber when declaring
	// a new variable
	//
	Employee(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year);
	//=================================================================================
	//
	//====DESTRUCTOR===================================================================
	~Employee();
	//=================================================================================
	//
	//====setRecord()==================================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// set the information from declartion to the data member 
	//
	// PRE-CONDITIONS
	//		A empty information
	// 
	// POST-CONDITIONS
	//		A employee's information
	//
	void setRecord(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year);
	//=================================================================================
	//
	//====print()======================================================================
	// Access function 
	// 
	// This function is an access function, and the purpose of this function is to
	//  display a programmer's information 
	//
	// PRE-CONDITIONS
	//		A employee's information
	// 
	// POST-CONDITIONS
	//		A employee's information
	//
	void print();
};

#endif
