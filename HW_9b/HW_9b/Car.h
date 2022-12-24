// Car.h

#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
	static int carCount;
	string model;
	int year;
public:
	Car();
	Car(string model, int year);
	~Car();
	void setCar(string model, int year);
	static int getCount();
	void displayCar()const;
	friend bool areSame(Car &car1, Car &car2);
};

#endif
