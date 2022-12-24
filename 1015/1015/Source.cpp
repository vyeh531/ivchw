// Source.cpp

#include "Auto.h"
#include"Truck.h"

//bool areSame(Vehicle veh1, Vehicle veh2);
//void changeYear(Vehicle vehicle);

void showRetail(Vehicle& vehicle);
int main()
{
	//Auto a1;	//calls the default constructor
	Auto a2(88888, 1999, "Ford", 2000, false);
	//Truck t1;
	Truck t2(54321, 2015, "Dodge Ram", 1000, 500);

	cout << "The retail price of Auto #2 is $";
	//showRetail(a2);

	cout << endl << endl;

	cout << "\nThe retail price of Truck #2 is $";
	showRetail(t2);

	//cout << "Here is Auto #1:\n";
	//a1.displayVehicle();

	//cout << "\n\nHere is Auto #2:\n";
	//a2.displayVehicle();

	//cout << "Truck #1:\n";
	//t1.displayVehicle();
	
	//cout << "\nTruck#2:\n";
	//t2.displayVehicle();




/*
	int idNum = 12345;
	int yearMade = 2018;
	string vehModel = "Toyota Prius";
	float wholesale = 10000;

	Vehicle v1;
	Vehicle v2(idNum, yearMade, vehModel, wholesale);
	Vehicle v3;
	//--------------------
	cout << "Vehicle #1:\n";
	v1.displayVehicle();

	cout << "\nVehicle #2:\n";
	v2.displayVehicle();

	//--------------------

	v1.setID(33333);
	v1.setYear(2005);
	v1.setWholesale(1000);
	v1.setModel("Nissan Prenta");

	cout << "\n Vehicle #1 after the \"set\" functions:\n";
	v1.displayVehicle();

	//--------------------

	cout << "Vehicle #2's ID is " << v2.getYear() << ".\n\n";

	cout << "The retail price of vehicle #1 is $" << v1.calcRetail() << ".\n\n";
	
	//------------------------
	if (areSame(v1, v2))
	{
		cout << "Same year.\n\n";
	}
	else
	{
		cout << "Different years.\n\n";
	}
	//------------------------

	v1 = changeYear(v1);

	cout << "Vehicle #1from main() function: \n";
	v1.displayVehicle();
	*/


	return 0;
}
void showRetail(Vehicle& vehicle)
{
	cout << vehicle.calcRetail();
}
/*
//----------------------------
bool areSame(Vehicle veh1, Vehicle veh2)
{
	return (veh1.getYear() == veh2.getYear());

	if (veh1.getYear() == veh2.getYear())
	{
		return true;
	}
	else
	{
		return false;
	}
}
//----------------------------
Vehicle changeYear(Vehicle vehicle)
{
	vehicle.setYear(2020);

	cout << "Vehicle #1 from inside the changeYear() function:\n";
	vehicle.displayVehicle();

	return vehicle;
}
*/