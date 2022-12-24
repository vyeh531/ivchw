// Presidents.h

#include<iostream>
#include<string>
using namespace std;

#ifndef PRESIDENTS_H
#define PRESIDENTS_H

class Presidents
{
private:
	int number;
	string name;
	string quote;
public:
	Presidents();
	~Presidents();
	
	// functions
	void setNumber(int number);
	void setName(string  name);
	void setQuote(string quote);
	void displayPresidents();
};

#endif
