/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment#3EC: Extra Credit
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/16/2021
*********************************************************/
#include <iostream>
#include "Time.h"
#include "ExtendedTime.h"
#include "Invoice.h"
#include <string>
using namespace std;

int main()
{
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment#3EC: Extra Credit\n";
	cout << "*****************************************\n";

	ExtendedTime E1 = { 11, 28, 00, PACIFIC };
	//Invoice I1 = { 10, 12, 9, 1 };

	cout << E1;



	return 0;
}