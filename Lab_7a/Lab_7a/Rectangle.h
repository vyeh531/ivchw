// Rectangle.h

#include<iostream>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
	int width;
	int length;
public:
	Rectangle();
	~Rectangle();
	void setWidth(double width);
	void setLength(double length);
	double getWidth()const;
	double getLength()const;
	double getArea(double width, double length)const;
};

#endif