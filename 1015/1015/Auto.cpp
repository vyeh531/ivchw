//	Auto.cpp

#include"Auto.h"

Auto::Auto()
{
	id = 0;
	year = 0;
	wholesalePrice = 0;
	convertible = false;
}
//-----------------------------
Auto::Auto(int id, int year, string model, float wholesalePrice, bool convertible)
{
	this->id = id;
	this->year = year;
	this->model = model;
	this->wholesalePrice = wholesalePrice;
	this->convertible = convertible;
}
//-----------------------------
Auto::~Auto() {}
//-----------------------------
void Auto::setConvertible(bool convertible)
{
	this->convertible = convertible;
}
//-----------------------------
void Auto::displayVehicle()
{
	//Vehicle::displayVehicle();

	cout << "ID:  " << id << endl
		<< "Year:  " << year << endl
		<< "Model:  " << model << endl;

	cout << "Convertible:  ";
		if (convertible == true)
		{
			cout << "Yes\n\n";
		}
		else
		{
			cout << "No\n\n";
		}
		cout << "Wholesale price:  " << wholesalePrice << endl << endl;
}
//-----------------------------
float Auto::calcRetail()
{
	return wholesalePrice * 1.5;
}