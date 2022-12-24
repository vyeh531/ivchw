// Programmer.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #3	: Class Constructors, Inheritance & Init
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/12/2021
*********************************************************/
#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Employee.h"

class Programmer : public Employee
{
private:
	int departmentNum;		// Department number
	string supervisorName;	// Supervisor¡¦s name
	int raisePercent;		// Percentage of last salary increase
	bool cIden;				// A C++ identifier(true if the employee knows C++)
	bool javaIden;			// A Java identifier(true if the employee knows Java)
public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	Programmer();
	//=================================================================================
	//
	//====OVERLOAD CONSTRUCTOR=========================================================
	// This function set every variable from declaring to the data mamber when declaring
	// a new variable
	//
	Programmer(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year, int departmentNum, string supervisorName, int raisePercent, bool cIden, bool javaIden);
	//=================================================================================
	//
	//====DESTRUCTOR===================================================================
	~Programmer();
	//=================================================================================
	//
	//====setProg()====================================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// set the information from declartion to the data member 
	//
	// PRE-CONDITIONS
	//		A empty information
	// 
	// POST-CONDITIONS
	//		A programmer's information
	//
	void setProg(int departmentNum, string supervisorName, int raisePercent, bool cIden, bool javaIden);
	//=================================================================================
	//
	//====print()======================================================================
	// Access function 
	// 
	// This function is an access function, and the purpose of this function is to
	//  display a programmer's information 
	//
	// PRE-CONDITIONS
	//		A programmer's information
	// 
	// POST-CONDITIONS
	//		A programmer's information
	//
	void print();
};

#endif