// ClockType.cpp

#include"ClockType.h"

// ----------------------------------------------------------	
// Description: Default constructor ¡V Object is constructed
//				and its data members are assigned 0s.
// Input:	No parameters passed		
// Output:	hrs=0; mins=0; secs=0
// ----------------------------------------------------------	
ClockType::ClockType()
{
	hrs = 0;
	mins = 0;
	secs = 0;
}
// ----------------------------------------------------------	
// Description: Constructor ¡V Object is constructed and 
//				data members are set according to parameters.
// Input:	hours, minutes, and seconds are passed 
//			when object is instantiated.	
// Output:	hrs=hours; mins=minutes; secs=seconds
// ----------------------------------------------------------	
ClockType::ClockType(int hours, int minutes, int seconds)
{
	hrs = hours;
	mins = minutes;
	secs = seconds;
}
// ----------------------------------------------------------	
// Description:  Destructor
// ----------------------------------------------------------	
ClockType::~ClockType() {}
// ----------------------------------------------------------	
// Description: setTime method sets the time.  Time is set 
//   			according to the parameters.
// Input:	hours, minutes, and seconds are passed
// Output:	hrs=hours; mins=minutes; secs=seconds
// ----------------------------------------------------------	
void ClockType::setTime(int hours, int minutes, int seconds)
{
	hrs = hours;
	mins = minutes;
	secs = seconds;
}
// ----------------------------------------------------------	
// Description:  	getTime method returns the time. 
// Input:	hours, minutes, and seconds are passed by reference
// Output:	hrs=hours; mins=minutes; secs=seconds
// ----------------------------------------------------------	
int ClockType::getTime()const
{
	return hrs, mins, secs;
}
// ----------------------------------------------------------	
// Description:  incrementSeconds method increments time by one second.
//				 Use military time:  0:0:0 am to 23:59:59 pm
//    If there are 59 seconds and one one second is added, then seconds is
//    assigned zero and minutes is incremented.  
//    (Use incrementMinutes() function).
// Input:	
// Output:	Time is incremented by one second.
// ----------------------------------------------------------	
void ClockType::incrementSeconds()
{
	secs++;
	if (secs >= 60)
	{
		secs = secs - 60;
		mins = mins++;
	}
	else
	{
		secs = secs;
	}
}
//-----------------------------------------------------------
// Description:  	incrementMinutes method increments time by one minute.
//    If there are 59 minutes and one one minute is added, then minutes is
//    assigned zero and hours is incremented.  
//    (Use incrementHours() function).
// Input:	
// Output:	Time is incremented by one minute.
// ----------------------------------------------------------	
void ClockType::incrementMinutes()
{
	mins++;
	if (mins >= 60)
	{
		mins = mins - 60;
		hrs = hrs++;
		if (hrs >= 24)
		{
			hrs = hrs - 24;
		}
		else
		{
			hrs = hrs;
		}
	}
	else
	{
		mins = mins;
	}
}
//-----------------------------------------------------------
// Description:  	incrementHours method increments time by one hour
// Input:	
// Output:	Time is incremented by one hour.
// ----------------------------------------------------------	
void ClockType::incrementHours()
{
	hrs++;
	if (hrs >= 24)
	{
		hrs = hrs - 24;
	}
	else
	{
		hrs = hrs;
	}
}
//-----------------------------------------------------------
// Description:  	printTime method prints the time.
// Input:	
// Output:	Time is printed in the form:  hh:mm:ss
// ----------------------------------------------------------	
void ClockType::printTime()const
{
	cout << hrs << ":" << mins << ":" << secs << "." << endl;
}