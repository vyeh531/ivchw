// Triangle.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #9	: Abstract Classes & Virtual Functions
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/16/2021
*********************************************************/
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
using namespace std;

class Triangle : public Shape
{
private:
	float side1;
	float side2;
	float side3;

public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	Triangle();
	//=================================================================================
	//
	//====OVERLOAD CONSTRUCTOR=========================================================
	Triangle(float side1, float side2, float side3);
	//====DESTRUCTOR===================================================================
	~Triangle();
	//=================================================================================
	//
	//====calcPerimeter()==============================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// calculate the perimeter of the triangle.
	//
	// PRE-CONDITIONS
	//		The triangle's lengths of each side
	// 
	// POST-CONDITIONS
	//		The perimeter of the triangle
	//
	virtual	double calcPerimeter();
	//=================================================================================
	//
	//====calcArea()===================================================================
	// Mutator function 
	// 
	// This function is a mutator function, and the purpose of this function is to 
	// calculate the area of the triangle.
	//
	// PRE-CONDITIONS
	//		The triangle's lengths of each side
	// 
	// POST-CONDITIONS
	//		The area of the triangle
	//
	virtual float calcArea();
	//=================================================================================
	//
	//====set function()===============================================================
	void setSide1(float side1);
	void setSide2(float side2);
	void setSide3(float side3);
};
#endif