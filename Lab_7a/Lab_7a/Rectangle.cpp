// Rectangle.cpp

#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 0;
	length = 0;
}
//==================================================================
Rectangle::~Rectangle() {}
//==================================================================
void Rectangle::setWidth(double width)
{
	this->width = width;
}
//==================================================================
void Rectangle::setLength(double length)
{
	this->length = length;
}
//==================================================================
double Rectangle::getWidth()const
{
	return width;
}
//==================================================================
double Rectangle::getLength()const
{
	return length;
}
//==================================================================
double Rectangle::getArea(double width, double length)const
{
	return width * length;
}