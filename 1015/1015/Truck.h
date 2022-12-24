//	Truck.h

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	int loadCapacity;
public:
	Truck();
	Truck(int idNum, int yearMade, string vehModel, float wholesale, int loadCapacity);
	~Truck();
	void displayVehicle();
	void setLoadCapacity(int loadCapacity);
	
	virtual float calcRetail();
};
