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
using namespace myInventory;


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
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C			: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #7	: Pointers & Dynamic Arrays\n";
	cout << "*****************************************\n";

	Inventory inv1;					// Initializing Inventory 1 (inv1)

	cout << "INVENTORY 1\n";
	inv1.addAnInventory("Nike basketball shoes", 145.99, 22);
	inv1.addAnInventory("Under Armour T-shirt", 29.99, 33);
	inv1.addAnInventory("Brooks running shoes", 111.44, 11);
	inv1.addAnInventory("Asics running shoes", 165.88, 20);
	inv1.addAnInventory("Nike shorts", 45.77, 77);

	inv1.displayInventory();
	inv1.sellItem("Nike basketball shoes", 2);
	inv1.sellItem("Under Armour T-shirt", 3);
	inv1.sellItem("Nike shorts", 4);
	inv1.sellItem("Brooks running shoes", 1);
	inv1.printReceipt();
	inv1.displayInventory();
	inv1.displayTransactionHistory();

	Inventory inv2 = inv1;				// Copying Inventory 1 to Inventory 2

	cout << "\nINVENTORY 2\n";
	inv2.displayInventory();
	inv2.printReceipt();
	inv2.displayTransactionHistory();


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