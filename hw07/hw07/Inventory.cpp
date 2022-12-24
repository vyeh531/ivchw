// inventory.cpp

#include "Inventory.h"


Inventory::Inventory()
{
	string name = "";
	double cost = 0.0;
	int quantity = 0;
}
//=====================================
//
//=====================================
Inventory::Inventory(string name, double cost, int quantity)
{
	this->name = name;
	this->cost = cost;
	this->quantity = quantity;
}
//=====================================
//
//=====================================
Inventory::~Inventory() {}
//=====================================
//
//=====================================
Inventory::Inventory(const Inventory& inv1)
{
	name = inv1.name;
	cost = inv1.cost;
	quantity = inv1.quantity;
}
//=====================================
//
//=====================================
int Inventory::operator-=(int quan)
{
	return quantity -= quan;
}
//=====================================
//
//=====================================
string Inventory::getName()
{
	return name;
}
//=====================================
//
//=====================================
double Inventory::getCost()
{
	return cost;
}
//=====================================
//
//=====================================
int Inventory::getQuantity()
{
	return quantity;
}