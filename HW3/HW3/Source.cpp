//Attached: HW_2a, 2b, 2c
//=========================
//Program: HW_2a
//=========================
//Programmer: Vivian Yeh
//Class: CS 1A
//=========================

#include <iostream>
#include <iomanip>
using namespace std;
const float TAX_RATE = 0.07;
float janSales;
float febSales;
float marSales;
int main()
{
	cout << "Enter January sales:  ";
	cin >> janSales;
	cout << "Enter Feburary sales:  ";
	cin >> febSales;
	cout << "Enter March sales:  ";
	cin >> marSales;

	cout << endl << endl <<"Total sales for the first three months is $" << janSales + febSales + marSales << "," << endl;
	cout << fixed << setprecision(2) << "and the amount of sales tax is $" << (janSales + febSales + marSales) * TAX_RATE << endl << endl;

	return 0;
}

/*=================OUTPUT=================
Enter January sales:  1101.55
Enter Feburary sales:  2321.22
Enter March sales:  3313.12


Total sales for the first three months is $6735.89,
and the amount of sales tax is $471.51


Press any key to close this window . . .
*/