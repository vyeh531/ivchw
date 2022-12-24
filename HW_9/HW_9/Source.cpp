//Attached: HW_9a, 9b
//==================================================================
//Program: HW_9a
//==================================================================
//Programmer: Vivian Yeh
//Class: CS 1B
//Instructor: Dennis Rainey
//==================================================================
#include"Dog.h"

//==== main ========================================================
//
//==================================================================
int main()
{
	Dog myDog("Spot", 5.5, 3);
	Dog yourDog("Jack", 4.5, 3);

	//-----------------------------------------
	if (myDog >= 2)		// Overload the  >=  operator
	{
		cout << "The dog is at least 2 years old.\n\n";
	}
	else
	{
		cout << "The dog is less than 2 years old.\n\n";
	}
	//-----------------------------------------
	if (yourDog < myDog)	// Overload the  <  operator
	{
		cout << "Your dog weighs less than my dog.\n\n";
	}
	else
	{
		cout << "Your dog does not weigh less than my dog.\n\n";
	}
	//-----------------------------------------
	if (myDog == yourDog)	// Overload the  ==  operator
		cout << "They have the same name.\n\n";
	else
		cout << "They do not have the same name.\n\n";
	//-----------------------------------------
	cout << yourDog << endl;


	return 0;
}
//==================================================================
//
//===== OUTPUT =====================================================
/*
The dog is at least 2 years old.

Your dog weighs less than my dog.

They do not have the same name.

NAME:  Jack
WEIGHT:  4.5 pounds
AGE:  3 years old.


Press any key to close this window . . .
*/
