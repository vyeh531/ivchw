/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #9	: Abstract Classes & Virtual Functions 
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/16/2021
*********************************************************/
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"


void printPerimeter(Shape& shape);
void printArea(Shape& shape);
/**********************************************************
*
* Abstract Classes & Virtual Functions 
*
*_________________________________________________________
* This program uses the method of pure virtual function
* to call the different functions from the matched class
* type, and it prints out the perimeter and the area of
* the rectangle and triangle
*_________________________________________________________
* INPUT:
* width: The width of the rectangle object
* length: The length of the rectangle object
* side1: The first side of the triangle object
* side2: The second side of the triangle object
* side3: The third side of the triangle object
*
* OUTPUT:
* The perimeter and the area of the rectangle and triangle
* from user's input
***********************************************************/
int main()
{
	Rectangle r1;	// Instantiate a Rectangle object
	Triangle t1;	// Instantiate a Triangle object

	float width = 0;	// Instantiate the width of Rectangle object
	float length = 0;	// Instantiate the length of a Rectangle object
	float side1 = 0;	// Instantiate the side1 of a Triangle object
	float side2 = 0;	// Instantiate the side2 of a Triangle object
	float side3 = 0;	// Instantiate the side3 of a Triangle object

	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #9	: Abstract Classes & Virtual Functions\n";
	cout << "*****************************************\n";
	
	// Rectangle case
	// ask the user to input the data of the rectangle
	cout << "Please enter the length of the rectangle:\n";
	cin >> length;
	r1.setLength(length);
	cout << "Please enter the width of the rectangle:\n";
	cin >> width;
	r1.setWidth(width);

	// print out the perimeter and the area of the input rectangle
	printPerimeter(r1);
	printArea(r1);

	// Triangle case
	// ask the user to input the data of the triangle
	cout << "Please enter the first side of the triangle:\n";
	cin >> side1;
	t1.setSide1(side1);
	cout << "Please enter the second side of the triangle:\n";
	cin >> side2;
	t1.setSide2(side2);
	cout << "Please enter the third side of the triangle:\n";
	cin >> side3;
	t1.setSide3(side3);

	// print out the perimeter and the area of the input triangle
	printPerimeter(t1);
	printArea(t1);

	// INPUT:	The length and width of a rectangle, and the length of the 
	//			three sides of a triangle
	// PROCESSING:	First, instantiate a Rectangle and a Triangle object, and
	//				ask user to input the data of the rectagle. Second, called 
	//				printPerimeter and printArea that call the methods calcPerimeter
	//				and	calcArea respectfully. Then, do the same progress for the
	//				triangle
	//
	// OUTPUT:	First, it asks user to input the data of rectangle, and it outputs 
	//			the perimeter and area of the rectangle. Last, it asks user to 
	//			input the data of triangle, and it outputs the perimeter and area 
	//			of the triangle.
	return 0;
}
//=================================================================================
//
//=================================================================================
void printPerimeter(Shape& shape)
{
	cout << "The perimeter is " << shape.calcPerimeter() << ".\n";
}
//=================================================================================
//
//=================================================================================
void printArea(Shape& shape)
{
	cout << "The area is " << fixed << setprecision(2) << shape.calcArea() << ".\n\n\n";
}