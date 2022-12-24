// ClockType.h
#include<iostream>
using namespace std;

#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

class ClockType
{
private:
	int hrs;
	int mins;
	int secs;
public:
	ClockType();
	ClockType(int hours, int minutes, int seconds);
	~ClockType();
	void setTime(int hours, int minutes, int seconds);
	int getTime()const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	void printTime()const;
};

#endif