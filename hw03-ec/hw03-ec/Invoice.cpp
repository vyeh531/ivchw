// Invoice.cpp

# include "Invoice.h"

Invoice::Invoice()
{
	Time purchase_time = { 0, 0, 0 };
}
//===========================================
//
//===========================================
Invoice::Invoice(int hours, int minutes, int seconds, Time purchase_time) :Time(hours, minutes, seconds)
{
	this->purchase_time = purchase_time;
}
//===========================================
//
//===========================================
Invoice::~Invoice() {}