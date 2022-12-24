// ExtendedTime.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment#3EC: Extra Credit
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/16/2021
*********************************************************/
#ifndef EXTENDEDTIME_H
#define EXTENDEDTIME_H
#include "Time.h"

enum TimeZone { PACIFIC, MOUNTAIN, CENTRAL, EASTERN };
class ExtendedTime : public Time
{
private:
	TimeZone time_zone;
public:
	ExtendedTime();
	ExtendedTime(int hours, int minutes, int seconds, TimeZone time_zone);
	~ExtendedTime();

	friend ostream& operator << (ostream& stream, ExtendedTime& time_zone);
};
#endif
