// Time.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment#3EC: Extra Credit
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/16/2021
*********************************************************/
#include<iostream>
using namespace std;

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time();
	Time(int hrs, int min, int sec);
	~Time();
private:
	int hours;
	int minutes;
	int seconds;
};
#endif