// Date.cpp

#include "Date.h"
#include <iomanip>

Date::Date()		// initialize all information
{
	month = 0;
	day = 0;
	year = 0;
}
//=====================================
//
//=====================================
Date::~Date(){}
//=====================================
//
//=====================================
void Date::setDate(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}
//=====================================
//
//=====================================
void Date::displayDate()
{
	cout << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day << "/" << year << endl;
}
