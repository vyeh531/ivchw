// Rectangle.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #9	: Abstract Classes & Virtual Functions
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/16/2021
*********************************************************/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
using namespace std;

class Rectangle : public Shape
{
private:
	float length;
	float width;

public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	Rectangle();
	//====DESTRUCTOR===================================================================
	~Rectangle();
	//=================================================================================
	//
	//====calcPerimeter()==============================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// calculate the perimeter of the rectangle.
	//
	// PRE-CONDITIONS
	//		The rectangle's lengths of each side
	// 
	// POST-CONDITIONS
	//		The perimeter of the rectangle
	//
	virtual	double calcPerimeter();
	//=================================================================================
	//
	//====calcArea()===================================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// calculate the area of the rectangle.
	//
	// PRE-CONDITIONS
	//		The rectangle's lengths of each side
	// 
	// POST-CONDITIONS
	//		The area of the rectangle
	//
	virtual float calcArea();
	//=================================================================================
	//
	//====set function()===============================================================
	void setLength(float length);
	void setWidth(float width);
};
#endif