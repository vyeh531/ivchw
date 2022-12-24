// ExtendedTime.cpp

#include "ExtendedTime.h"


ExtendedTime::ExtendedTime()
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	TimeZone time_zone = {};
}
//===========================================
//
//===========================================
ExtendedTime::ExtendedTime(int hours, int minutes, int seconds, TimeZone time_zone):Time(hours, minutes, seconds)
{
	this->time_zone = time_zone;
}
//===========================================
//
//===========================================
ExtendedTime::~ExtendedTime(){}
//===========================================
//
//===========================================
ostream& operator << (ostream& stream, ExtendedTime& time_zone)
{
	stream << "The extended time is " << time_zone << endl;

	return stream;
}