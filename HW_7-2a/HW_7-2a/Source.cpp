//Attached: HW_7c, 7d
//==================================================================
//Program: HW_7c
//==================================================================
//Programmer: Vivian Yeh
//Class: CS 1B
//Instructor: Dennis Rainey
//==================================================================
#include"Presidents.h"

//==== main ========================================================
//
//==================================================================
int main()
{
	int number = 0;
	string name = "";
	string quote = "";
	Presidents p1;
	Presidents p2;
	Presidents p3;

	cout << "Enter the first president・s number:  ";
	cin >> number;
	cout << "Enter his name:  ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter his quote :  ";
	getline(cin, quote);

	p1.setNumber(number);
	p1.setName(name);
	p1.setQuote(quote);

	cout << "Enter the second president・s number:  ";
	cin >> number;
	cout << "Enter his name:  ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter his quote :  ";
	getline(cin, quote);

	p2.setNumber(number);
	p2.setName(name);
	p2.setQuote(quote);

	cout << "Enter the third president・s number:  ";
	cin >> number;
	cout << "Enter his name:  ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter his quote :  ";
	getline(cin, quote);

	p3.setNumber(number);
	p3.setName(name);
	p3.setQuote(quote);

	cout << "The presidents are:\n";
	p1.displayPresidents();
	p2.displayPresidents();
	p3.displayPresidents();

	return 0;
}
//==================================================================
//
//===== OUTPUT =====================================================
/*
Enter the first president・s number:  37
Enter his name:  Richard Nixon
Enter his quote :  I am not a crook.
Enter the second president・s number:  45
Enter his name:  Donald Trump
Enter his quote :  Is our country still spending money on the GLOBAL WARMING HOAX?
Enter the third president・s number:  42
Enter his name:  Bill Clinton
Enter his quote :  I did not have sexual relations with that woman.
The presidents are:
Richard Nixon, 37th president, said:
"I am not a crook."
Donald Trump, 45th president, said:
"Is our country still spending money on the GLOBAL WARMING HOAX?"
Bill Clinton, 42nd president, said:
"I did not have sexual relations with that woman."

Press any key to close this window . . .
*/