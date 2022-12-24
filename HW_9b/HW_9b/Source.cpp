//Attached: HW_9a, 9b
//==================================================================
//Program: HW_9b
//==================================================================
//Programmer: Vivian Yeh
//Class: CS 1B
//Instructor: Dennis Rainey
//==================================================================
#include"Car.h"

bool areSame(Car& car1, Car& car2);
//==== main ========================================================
//
//==================================================================
int main()
{
	Car myCar;
	Car yourCar("Toyota", 2007);

	myCar.displayCar();
	yourCar.displayCar();

	myCar.setCar("Ford", 2002);
	myCar.displayCar();

	if (areSame(myCar, yourCar))
	{
		cout << "The two cars are the same model and year.\n\n";
	}
	else
	{
		cout << "The two cars are not the same model and year.\n\n";
	}

	cout << Car::getCount() << " cars have been declared.\n\n";

	return 0;
}
//==================================================================
bool areSame(Car& car1, Car& car2)
{
	return ((car1.model == car2.model) && (car1.year == car2.year));
}
//==================================================================
//
//===== OUTPUT =====================================================
/*
Model:
Year:  0

Model:  Toyota
Year:  2007

Model:  Ford
Year:  2002

The two cars are not the same model and year.

2 cars have been declared.


Press any key to close this window . . .
*/
