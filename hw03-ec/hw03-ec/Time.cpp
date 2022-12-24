// Time.cpp

# include "Time.h"

Time::Time()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}
//===========================================
//
//===========================================
Time::Time(int hrs, int min, int sec)
{
	this->hours = hrs;
	this->minutes = min;
	this->seconds = sec;
}
//===========================================
//
//===========================================
Time::~Time() {}