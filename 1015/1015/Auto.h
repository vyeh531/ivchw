//	Auto.h

#include"Vehicle.h"

class Auto : public Vehicle
{
private:
	bool convertible;
public:
	Auto();		// default constructor
	Auto(int id, int year, string model, float wholesalePrice, bool convertible);
	~Auto();
	//	functions
	void setConvertible(bool convertible);
	void displayVehicle();
	float calcRetail();
};
