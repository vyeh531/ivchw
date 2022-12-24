//	Truck.cpp

#include"Truck.h"


Truck::Truck() :Vehicle()
{
	loadCapacity = 0;
}
//---------------------------------
Truck::Truck(int idNum, int year, string model, float wholesale, int loadCapacity)
	: Vehicle(idNum, year, model, wholesale)
{
	this->loadCapacity = loadCapacity;
}
//---------------------------------
Truck::~Truck() {}
//---------------------------------
void Truck::displayVehicle()
{
	cout << "ID:  " << id << endl
		<< "Year:  " << year << endl
		<< "Model:  " << model << endl
		<< "Load Capacity:  " << loadCapacity << endl;
}
//---------------------------------
void Truck::setLoadCapacity(int loadCapacity)
{
	this->loadCapacity = loadCapacity;
}
//---------------------------------
float Truck::calcRetail()
{
	return wholesalePrice * 2;

}
