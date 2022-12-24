// Invoice.h
/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment#3EC: Extra Credit
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/16/2021
*********************************************************/
#ifndef INVOICE_H
#define INVOICE_H
#include "Time.h"

class Invoice : public Time
{
private:
	Time purchase_time;
public:
	Invoice();
	Invoice(int hours, int minutes, int seconds, Time purchase_time);
	~Invoice();

	/*friend ostream& operator << (ostream& output, Time& purchase_time)
	{
		output << "The invoice time is " << purchase_time << endl;

		return output;
	}*/


};
#endif
