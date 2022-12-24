// SoftwareArchitect.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #3	: Class Constructors, Inheritance & Init
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/12/2021
*********************************************************/
#ifndef SOFTWAREARCHITECT_H
#define SOFTWAREARCHITECT_H

#include "Employee.h"

class SoftwareArchitect : public Employee
{
private:
	int departmentNum;		// Department number
	string supervisorName;	// Supervisor¡¦s name
	int raisePercent;		// Percentage of last salary increase
	int experienceYear;		// Years of experience designing software projects
	
public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	SoftwareArchitect();
	//=================================================================================
	//
	//====OVERLOAD CONSTRUCTOR=========================================================
	// This function set every variable from declaring to the data mamber when declaring
	// a new variable
	//
	SoftwareArchitect(string name, string ID, string phoneNum, int age, string gender, string jobTitle, string salary, int month, int day, int year, int departmentNum, string supervisorName, int raisePercent, int experienceYear);
	//=================================================================================
	//
	//====DESTRUCTOR===================================================================
	~SoftwareArchitect();
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
	//		A software architect's information
	//
	void setSoftArt(int departmentNum, string supervisorName, int raisePercent, int experienceYear);
	//=================================================================================
	//
	//====print()======================================================================
	// Access function 
	// 
	// This function is an access function, and the purpose of this function is to
	//  display a programmer's information 
	//
	// PRE-CONDITIONS
	//		A software architect's information
	// 
	// POST-CONDITIONS
	//		A software architect's information
	//
	void print();
};

#endif