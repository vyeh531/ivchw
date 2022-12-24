// Shape.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #9	: Abstract Classes & Virtual Functions
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/16/2021
*********************************************************/
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <iomanip>
using namespace std;

class Shape
{
public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	Shape();
	//====DESTRUCTOR===================================================================
	~Shape();
	//=================================================================================
	//
	//====calcPerimeter()==============================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// calculate the perimeter of the different shapes. (pure virtual function)
	//
	// PRE-CONDITIONS
	//		The lengths of each side
	// 
	// POST-CONDITIONS
	//		The perimeter of the shape
	//
	virtual	double calcPerimeter() = 0;
	//=================================================================================
	//
	//====calcArea()===================================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// calculate the area of the different shapes. (pure virtual function)
	//
	// PRE-CONDITIONS
	//		The lengths of each side
	// 
	// POST-CONDITIONS
	//		The area of the shape
	//
	virtual float calcArea() = 0;
};
#endif