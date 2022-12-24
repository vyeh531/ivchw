/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #7	: Pointers & Dynamic Arrays
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/02/2021
*********************************************************/
#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
using namespace std;

class Inventory
{
private:
	string name;	// name of equipment
	double cost;	// cost of equipment
	int quantity;	// quantity of equipment
public:
	//=================================================================================
	//
	//====CONSTRUCTOR==================================================================
	Inventory();
	//=================================================================================
	//
	//====OVERLOAD CONSTRUCTOR=========================================================
	// This function set every variable from declaring to the data mamber when declaring
	// a new variable
	//
	Inventory(string name, double cost, int quantity);
	//=================================================================================
	//
	//====DESTRUCTOR===================================================================
	~Inventory();
	//=================================================================================
	//
	//====COPY CONSTRUCTOR=========================================================
	// This function completely copies the data from an existed object
	//
	Inventory(const Inventory& inv1);
	//=================================================================================
	//
	//==== operator -+() ==============================================================
	// Mutator function 
	//															(overloading operator)
	// This function is a mutator function, and the purpose of this function is to
	//  substract integer quantity to the origin quantity of equipment 
	//
	// PRE-CONDITIONS
	//		The origin quantity
	// 
	// POST-CONDITIONS
	//		The outcome of the substraction
	//
	int operator-=(int quan);
	//=================================================================================
	//
	//==== Getter function ============================================================
	string getName();
	double getCost();
	int getQuantity();

};



#endif
