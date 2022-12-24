/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #7ec: Dynamic Memory
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/02/2021
*********************************************************/
#include <iostream>
#include <string>
using namespace std;

//============================
//
//==== struct =================
struct Item
{
	string name;
	int quantity;
	double cost;
};
const int MAX_SIZE = 50;
//============================
//
//==== class =================
class ManageInventory
{
private:
	int size{ MAX_SIZE };
	int count;
	Item** p_pInventoryItems;
public:
	ManageInventory() : count{ 0 }, p_pInventoryItems{ new Item * [size] } { }
	ManageInventory(int size) : size{ size }, count{ 0 }, p_pInventoryItems{ new Item * [size] } { }
	~ManageInventory() 
	{
		cout << "Destructor is called\n";
		delete[]p_pInventoryItems;
	}
	void addItem(string name, int quantity, double cost)
	{
		Item* item = new Item[size];	// the place I did the correction

		item->name = name;				// the place I did the correction
		item->cost = cost;				// the place I did the correction
		item->quantity = quantity;
		p_pInventoryItems[count++] = item;
	}
	void print() {
		for (int i = 0; i < count; ++i)
		{
			cout << p_pInventoryItems[i]->name << "\t"		// the place I did the correction
				<< p_pInventoryItems[i]->cost << "\t"		// the place I did the correction
				<< p_pInventoryItems[i]->quantity << endl;	// the place I did the correction
		}
	}
};

//============================
//
//==== main ==================
int main()
{
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #7ec: Dynamic Memory\n";
	cout << "*****************************************\n";

	ManageInventory inv;
	inv.addItem("Nike shirts", 2, 123.45);
	inv.addItem("Adidas shoes", 4, 77.77);

	inv.print();

	return 0;
}