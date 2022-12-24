// Car.cpp

#include"Car.h"

int Car::carCount = 0;
//----------------------------------------
Car::Car()
{
	carCount++;
	model = "";
	year = 0;
}
//----------------------------------------
Car::Car(string model, int year)
{
	carCount++;
	this->model = model;
	this->year = year;
}
//----------------------------------------
Car::~Car() {}
//----------------------------------------
void Car::setCar(string model, int year)
{
	this->model = model;
	this->year = year;
}
//----------------------------------------
int Car::getCount()
{
	return carCount;
}
//----------------------------------------
void Car::displayCar()const
{
	cout << "Model:  " << model << endl
		<< "Year:  " << year << endl << endl;
}
//----------------------------------------
