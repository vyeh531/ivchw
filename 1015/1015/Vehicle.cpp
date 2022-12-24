// Vehicle.cpp

#include "Vehicle.h"

Vehicle::Vehicle()
{
	id = 0;
	year = 0;
	wholesalePrice = 0.0;
}
//================================================
Vehicle::Vehicle(int id, int year, string vehModel, float wholesale)
{
	this->id = id;
	this->year = year;
	model = vehModel;
	wholesalePrice = wholesale;
}
//================================================
Vehicle::~Vehicle() {}
//================================================
// set functions are mutator functions
void Vehicle::setID(int idNum)
{
	id = idNum;
}
//================================================
void Vehicle::setYear(int year)
{
	this->year = year;
}
//================================================
void Vehicle::setModel(string vehModel)
{
	model = vehModel;
}
//================================================
void Vehicle::setWholesale(float wholesale)
{
	wholesalePrice = wholesale;
}
//================================================
// get functions are accessor functions
int Vehicle::getYear()const
{
	return year;
}
//================================================
/* This is a pure virtual 
void Vehicle::displayVehicle()
{
	cout << "ID:  " << id << endl
		<< "Year:  " << year << endl
		<< "Model:  " << model << endl
		<< "Wholesale price:  " << wholesalePrice << endl;
}
*/
//================================================
/* This is a pure virtual function, therefore no fucntion body
float Vehicle::calcRetail()const
{
	return wholesalePrice * 1.5;
}
*/
//================================================