// Presidents.cpp

#include"Presidents.h"

Presidents::Presidents() {}
//------------------------------------------------------------------
Presidents::~Presidents() {}
//------------------------------------------------------------------
void Presidents::setNumber(int number)
{
	this->number = number;
}
//------------------------------------------------------------------
void Presidents::setName(string  name)
{
	this->name = name;
}
//------------------------------------------------------------------
void Presidents::setQuote(string quote)
{
	this->quote = quote;
}
//------------------------------------------------------------------
void Presidents::displayPresidents()
{
	cout << name << ", " << number;
	if (number % 10 == 1)
	{
		cout << "st";
	}
	else if (number % 10 == 2)
	{
		cout << "nd";
	}
	else if (number % 10 == 3)
	{
		cout << "rd";
	}
	else
	{
		cout << "th";
	}
	cout << " president, said: \n\"" << quote << "\"\n";
}
