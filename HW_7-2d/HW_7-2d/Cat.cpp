// Cat.cpp

#include "Cat.h"

Cat::Cat() {}
//==================================================================
Cat::~Cat() {}
//==================================================================
void Cat::setWeight(int weight)
{
	this-> weight = weight;
}
//==================================================================
void Cat::setColor(string color)
{
	this->color = color;
}
//==================================================================
void Cat::displayInfo()
{
	cout << " weights " << weight << " pounds and is "
		<< color << ".";
}
//==================================================================
void Cat::meow()
{
	cout << " says:  MEOW!";
}