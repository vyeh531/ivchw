// inventory.cpp

#include "Inventory.h"
using namespace myInventory;

Inventory::Inventory()
{
	inventoryCount = 0;
	shoppingCartCount = 0;
	transactionCount = 0;
	p_pInventoryItems = new Item * [size];
	p_pShoppingCart = new Item * [size];
	p_pTransactionHist = new Item * [size * 10];
}
//=====================================
//
//=====================================
Inventory::Inventory(int size)
{
	size = size;
	inventoryCount = 0;
	shoppingCartCount = 0;
	transactionCount = 0;
	p_pInventoryItems = new Item * [size];
	p_pShoppingCart = new Item * [size];
	p_pTransactionHist = new Item * [size * 10];
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
	size = inv1.size;
	inventoryCount = inv1.inventoryCount;
	shoppingCartCount = inv1.shoppingCartCount;
	transactionCount = inv1.transactionCount;

	p_pInventoryItems = new Item * [size];
	p_pShoppingCart = new Item * [size];
	p_pTransactionHist = new Item * [size];

	for (int i = 0; i < inventoryCount; i++)
	{
		p_pInventoryItems[i] = new Item{ inv1.p_pInventoryItems[i]->name,
			inv1.p_pInventoryItems[i]->cost,
			inv1.p_pInventoryItems[i]->quantity,
			inv1.p_pInventoryItems[i]->status };
	}
	for (int i = 0; i < shoppingCartCount; i++)
	{
		p_pShoppingCart[i] = new Item{ inv1.p_pShoppingCart[i]->name,
			inv1.p_pShoppingCart[i]->cost,
			inv1.p_pShoppingCart[i]->quantity,
			inv1.p_pShoppingCart[i]->status };
	}
	for (int i = 0; i < transactionCount; i++)
	{
		p_pTransactionHist[i] = new Item{ inv1.p_pTransactionHist[i]->name,
			inv1.p_pTransactionHist[i]->cost,
			inv1.p_pTransactionHist[i]->quantity,
			inv1.p_pTransactionHist[i]->status };
	}
}
//=====================================
//
//=====================================
void Inventory::addAnInventory(string name, double cost, int quantity)
{
	p_pInventoryItems[inventoryCount++] = new Item{ name, cost, quantity };
	p_pTransactionHist[transactionCount++] = new Item{ name, cost, quantity, "Added to stock" };
}
//=====================================
//
//=====================================
void Inventory::displayInventory()
{
	cout << "--------------- Inventory List ---------------\n"
		<< left << setw(26) << "Name of Equipment" << setw(12) << "Cost" << setw(10) << "Quantity" << endl;
	for (int i = 0; i < inventoryCount; i++)
	{
		cout << setw(26) << p_pInventoryItems[i]->name << "$" << setw(11) << p_pInventoryItems[i]->cost
			<< setw(10) << p_pInventoryItems[i]->quantity << "\n";
	}
	cout << "\n\n";
}
//=====================================
//
//=====================================
void Inventory::sellItem(string name, int quantity)
{
	if (inventoryCount > 0)
	{
		int itemIndex = -1;

		for (int i = 0; i < inventoryCount; i++)
		{
			if (name == p_pInventoryItems[i]->name)
			{
				itemIndex = i;
			}
		}
		if (itemIndex != -1)
		{
			if (p_pInventoryItems[itemIndex]->quantity >= quantity)
			{
				p_pShoppingCart[shoppingCartCount++] = new Item{ name, p_pInventoryItems[itemIndex]->cost, quantity };
				p_pInventoryItems[itemIndex]->quantity -= quantity;
				p_pTransactionHist[transactionCount++] = new Item{ name, p_pInventoryItems[itemIndex]->cost, quantity, "Sold" };
			}
			else
			{
				cout << "Not enough items in stock\n";	// Print if the quantity of the given item in stock is less than the purchase quantity
			}
		}
		else
		{
			cout << "Item not found\n";	// Print if the customer purchases an item that does not exist
		}
	}
	else
	{
		cout << "Inventory is empty\n";	// Print if the number of elements in the array is 0
	}
}
//=====================================
//
//=====================================
void Inventory::printReceipt()
{
	double totalCost = 0;

	cout << "--------------- Receipt ---------------\n";
	cout << left << setw(26) << "Name of Equipment" << setw(12) << "Cost" << setw(10) << "Quantity" << endl;
	for (int i = 0; i < shoppingCartCount; i++)
	{
		cout << setw(26) << p_pShoppingCart[i]->name << "$" << setw(11) << p_pShoppingCart[i]->cost
			<< setw(10) << p_pShoppingCart[i]->quantity << "\n";
		totalCost += p_pShoppingCart[i]->cost * p_pShoppingCart[i]->quantity;
	}
	cout << "\n" << right << setw(22) << "Before tax:" << "    $" << totalCost
		<< "\n" << setw(22) << "After tax:" << "    $" << totalCost + totalCost * 0.0825 << "\n\n\n";
}
//=====================================
//
//=====================================
void Inventory::displayTransactionHistory()
{
	cout << "--------------- Transaction History ---------------\n";
	cout << left << setw(26) << "Item" << setw(12) << "Cost" << setw(13) << "Quantity" << "Status" << endl;
	for (int i = 0; i < transactionCount; i++)
	{
		cout << setw(26) << p_pTransactionHist[i]->name << "$" << setw(11) << p_pTransactionHist[i]->cost
			<< setw(13) << p_pTransactionHist[i]->quantity << p_pTransactionHist[i]->status << "\n";
	}
	cout << "\n\n";
}