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
#include <iomanip>
using namespace std;

namespace myInventory
{
	//============================
	//
	//==== struct ================
	struct Item
	{
		string name;	// name of equipment
		double cost;		// cost of equipment
		int quantity;	// quantity of equipment
		string status;	// status of equipment
	};
	const int MAX_SIZE = 50;
	//============================
	//
	//============================
	class Inventory
	{
	private:
		int size{ MAX_SIZE };
		int inventoryCount;
		int shoppingCartCount;
		int transactionCount;
		Item** p_pInventoryItems;
		Item** p_pShoppingCart;
		Item** p_pTransactionHist;
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
		Inventory(int size);
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
		// ==== addAnInventory =============================================================
		// Adds an item to the inventory
		//
		// PRE-CONDITIONS
		//      name - item name
		//		cost - cost of each item
		//		quantity - number of items to be added
		// POST-CONDITIONS
		//      New Item created on the heap and added to the array 
		//		"p_pInventoryItems"
		//=================================================================================
		void addAnInventory(string name, double cost, int quantity);
		// ==== displayInventory =========================================
		// Displays all items in the inventory
		//
		// PRE-CONDITIONS
		//      None
		// POST-CONDITIONS
		//      Prints a table of all items in the inventory
		// ===============================================================
		void displayInventory();
		// ==== sellItem =================================================
		// Makes one transaction
		//
		// PRE-CONDITIONS
		//      name - item name
		//		quantity - number of items to be sold
		// POST-CONDITIONS
		//      The given item's quantity deducted from stock
		//		The given item added to shopping cart
		// ===============================================================
		void sellItem(string name, int quantity);

		// ==== printReceipt =============================================
		// Displays all items that the customer purchased
		//
		// PRE-CONDITIONS
		//      None
		// POST-CONDITIONS
		//      Prints a table of the purchased items and the total cost
		//		before and after tax
		// ===============================================================
		void printReceipt();

		// ==== displayTransactionHistory ================================
		// Displays the transaction history
		//
		// PRE-CONDITIONS
		//      None
		// POST-CONDITIONS
		//      Prints a table of all transactions made
		// ===============================================================
		void displayTransactionHistory();

	};
}
#endif
