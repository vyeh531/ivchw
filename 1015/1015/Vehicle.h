// Vehicle.h

#include<iostream>
#include<string>
using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
protected:
	int id;
	int year;
	string model;
	float wholesalePrice;
public:
	Vehicle();											//default constructor (no parameters)
	Vehicle(int idNum, int yearMade, string vehModel, float wholesale);	//overloaded constructor
	~Vehicle();

	//"set" function is a mutator function (It changes the object)
	void setID(int idNum);
	void setYear(int yearMade);
	void setModel(string vehModel);
	void setWholesale(float wholesale);

	//"get" function is a access function (It does not change the object)
	//Accessor functions should be declared constant
	int getYear()const;

	//display functions are usually access functions and should be declared const
	virtual void displayVehicle() = 0;

	// pure virtual function - If a class has one or more pure virtual functions,
	// the class is a abstract class
	// An abstract class cannot be instantiater (cannot have an object)
	// A pure virtual function medates (requires) that all derived class have their owncalcRetail function
	virtual float calcRetail() = 0;
};

#endif