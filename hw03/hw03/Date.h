// Date.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #3	: Class Constructors, Inheritance & Init
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/12/2021
*********************************************************/
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
private:
	int month;		// hire month
	int day;		// hire day
	int year;		// hire year
public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	Date();
	//=================================================================================
	//
	//====DESTRUCTOR===================================================================
	~Date();
	//=================================================================================
	//
	//====setDate()====================================================================
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
	void setDate(int month, int day, int year);
	//=================================================================================
	//
	//====displayDate()================================================================
	// Access function 
	// 
	// This function is an access function, and the purpose of this function is to
	//  display a programmer's hire date
	//
	// PRE-CONDITIONS
	//		Integer month, day, and year
	// 
	// POST-CONDITIONS
	//		A employee's hire date
	//
	void displayDate();
};

#endif

