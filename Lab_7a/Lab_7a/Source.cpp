//Attached: Lab_7a
//==================================================================
//Program: Lab_7a
//==================================================================
//Programmer: Vivian Yeh
//Class: CS 1B
//Instructor: Dennis Rainey
//==================================================================
#include"Rectangle.h"

//==== main ========================================================
//
//==================================================================
int main()
{
	Rectangle tennisCourt;
	double width;
	double length;
	double area = 0;

	cout << "Enter the width of the court:  ";
	cin >> width;
	cout << "Enter the length of the court:  ";
	cin >> length;
	
	tennisCourt.setWidth(width);
	tennisCourt.setLength(length);

	tennisCourt.getWidth();
	tennisCourt.getLength();
	area = tennisCourt.getArea(width, length);

	cout << "The width of the court is " << width << " feet.\n";
	cout << "The length of the court is " << length << " feet.\n";
	cout << "The area of the court is " << area << " square feet.\n";

	return 0;
}
//==================================================================
//
//===== OUTPUT =====================================================
/*
Enter the width of the court:  60
Enter the length of the court:  120
The width of the court is 60 feet.
The length of the court is 120 feet.
The area of the court is 7200 square feet.

Press any key to close this window . . .
*/