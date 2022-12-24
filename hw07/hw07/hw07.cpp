/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #7	: Pointers & Dynamic Arrays
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/02/2021
*********************************************************/
#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

namespace tax	// define a namespace called tax
{
	double calcTax(double taxRate, double base) // calculate the cost after tax
	{
		return base * (taxRate + 1);
	}
}
/**********************************************************
*
* Pointers & Dynamic Arrays
*
*_________________________________________________________
* This program uses pointers to access the data, and it 
* print out the receipt for purchase which includes the 
* total cost befoore and after tax. It also prints out 
* an inventory list before and after Mark's purchase.
* It uses a copy constructor to copy a object.
*_________________________________________________________
* INPUT:
* SIZE: The constant size of the array
* p: The pointer for the Inventory objects
* q: The pointer for the string objects
*
* OUTPUT:
* The receipt of purchase, the total cost before and after
* tax, the inventory list before and after purchase, and 
* the new object copied by copy constructor
***********************************************************/
int main()
{
	const int SIZE = 5;			// size of the array
	Inventory* p = new Inventory[SIZE];		// declare and assign the pointer to a new array
	string* q = new string[SIZE];	// declare and assign the pointer to a new array

	p[0] = { "Nike basketball shoes", 145.99, 22 };	//assign the values
	p[1] = { "Unver Armour T-shirt", 29.99, 33 };
	p[2] = { "Brooks running shoes", 111.44, 11 };
	p[3] = { "Asics running shoes", 165.88, 20 };
	p[4] = { "Nike shorts", 45.77, 77 };

	double total = 0;		// total cost before tax
	double tax = 0;			// total cost after tax
	float taxRate = 0.0825;	// the tax rate

	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #7	: Pointers & Dynamic Arrays\n";
	cout << "*****************************************\n";

	cout << "Please enter the names of the athletic equipment:\n";
	for (int i = 0; i < SIZE; ++i)		// ask user to enter the name of equipment
	{
		getline(cin, q[i]);
	}
	
	cout << "******* Purchase receipt ******* " << endl;		// print out the purchase receipt
	cout << "Name of equipment\tCost\tQuantity" << endl;
	cout << "Nike basketball shoes\t$145.99\t\t2\n"
		<< "Under Armour T-shirts\t$29.99\t\t3\n"
		<< "Nike shorts\t\t$45.77\t\t4\n"
		<< "Brooks running shoes\t$111.44\t\t1\n";

	total = 145.99 * 2 + 29.99 * 3 + 45.77 * 4 + 111.44 * 1;	// calculate the total cost before tax
	cout << "\nTotal cost before tax: " << total << endl;
	tax = tax::calcTax(taxRate, total);			// use user defined namespace to calculate the cost after tax
	cout << "Total cost after tax:  " << tax  << endl;

	cout << "\nInventory list before Mark's purchase\n";
	cout << "Name of equipment\tCost\tQuantity" << endl;
	for (int i = 0; i < SIZE; ++i)					// print out the invertory list before Mark's purchase
	{
		cout << p[i].getName() << "\t$" << p[i].getCost() << "\t" << p[i].getQuantity() << endl;
	}

	p[0] -= 2;		// substract the quantity by the numbers of Mark's purchase
	p[1] -= 3;
	p[2] -= 1;
	p[3] -= 0;
	p[4] -= 4;

	cout << "\nInventory list after Mark's purchase\n";
	cout << "Name of equipment\tCost\tQuantity" << endl;
	for (int i = 0; i < SIZE; ++i)					// print out the invertory list after Mark's purchase
	{
		cout << p[i].getName() << "\t$" << p[i].getCost() << "\t" << p[i].getQuantity() << endl;
	}

	Inventory inv5 = p[0];				// call the copy constructor to copy the data to a new object
	cout << "\n\nThe copy object of the last object on the inventory list: \n";
	cout << inv5.getName() << "\t$" << inv5.getCost() << "\t" << inv5.getQuantity() << endl;

	delete[]q;			// delete the data which pointer points to 
	delete[]p;			// delete the data which pointer points to 

	// INPUT: The pointers and the data of inventory list and the purchase done by Mark
	// PROCESSING:	First allows user to enter the names of the athletic equipment, and
	//				shows the receipt for the purchase including the total cost before 
	//				and after tax. Print an inventory list before and after Mark¡¦s purchase.
	//				Call a copy constructor to copy the data of one of the equipment, and
	//				then print it out.
	//
	// OUTPUT:		First, it outputs the receipt for the purchase including the total 
	//				cost before and after tax. Second, it prints an inventory list before
	//				and after Mark¡¦s purchase. Last, it prints out the new object data of
	//				the copy of the existed equipment.
	return 0;
}