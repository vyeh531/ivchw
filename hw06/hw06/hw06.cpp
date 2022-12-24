/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #6	: Recursion (w/ Extra credit)
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 03/02/2021
*********************************************************/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void reverseStr(char str[], int num1, int num2);	// recursion function
void reverseRecursively(char str[], int num1, int num2);	// iterative function
/**********************************************************
*
*				Recursion
*						- Reverse characters
*_________________________________________________________
* This program uses recursion and iterative funtion way to
* reverse characters in an array, and then print them out
*
*_________________________________________________________
* INPUT:
* origin: The origin order of the given string
* index number: Two index numbers of the array
*
* OUTPUT:
* Each output of reversion, and three are from recursion
* function, the other are from iterative function
***********************************************************/
int main()
{
	char origin[] = "abcdefghijklmnopqrstuvwxyz";		// Input - Origin array
	char correct[] = "abcdefghijklmnopqrstuvwxyz";		// Input - The array for turning 
														// the order of origin array back

	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #6	: Recursion (w/ Extra credit)\n";
	cout << "*****************************************\n";

	reverseStr(origin, 12, 19);				// call the recursion function to reverse the characters
	cout << "The string after first reverse: " << origin << endl << endl;		// output the array
	strcpy_s(origin, correct);				// reverse the array back to origin order
	reverseStr(origin, 5, 23);				// call the recursion function to reverse the characters
	cout << "The string after second reverse: " << origin << endl << endl;		// output the array
	strcpy_s(origin, correct);				// reverse the array back to origin order
	reverseStr(origin, 1, 26);				// call the recursion function to reverse the characters
	cout << "The string after third reverse: " << origin << endl << endl;		// output the array
	strcpy_s(origin, correct);				// reverse the array back to origin order

	cout << "Below using iterative function: " << endl;
	reverseRecursively(origin, 12, 19);		// call the iterative function to reverse the characters
	cout << "The string after first loop: " << origin << endl << endl;			// output the array
	strcpy_s(origin, correct);				// reverse the array back to origin order
	reverseRecursively(origin, 5, 23);		// call the iterative function to reverse the characters
	cout << "The string after second loop: " << origin << endl << endl;			// output the array
	strcpy_s(origin, correct);				// reverse the array back to origin order
	reverseRecursively(origin, 1, 26);		// call the iterative function to reverse the characters
	cout << "The string after third loop: " << origin << endl << endl;			// output the array
	cout << "The differences between the recursive and iterative approaches: \n"
		<< "Recursion is solving a problem by reducing it to smaller versions of itself\n"
		<< "Iteration uses a loop to repeat a set of statements\n\n";


	// INPUT: The origin order of the given string
	// PROCESSING: First call the recursion function to reverse the array from the given index to 
	//			   another given index. After outputing, it reverse the order back to the origin, 
	// 			   and then repeat these processes three times. Then call the iterative function to 
	//			   reverse the array from the given index to another given index. After outputing, 
	//			   it reverse the order back to the origin, and then repeat these processes three times.
	//
	// OUTPUT:	First, it outputs the outcome of each reversion from the recursion function. Last, 
	//			it outputs the outcome of each reversion from the iterative function which is a for loop.
	return 0;
}
//=================================================================================	
//
//==== reverseStr() ===============================================================
// Mutator function 
// 
// This function is a mutator function, and the purpose of this function is to
// reverse the the characters in a string or character array given two indices
// by using the recursion function
//
// PRE-CONDITIONS
//		The origin array str[], num1 is the starting index, and num2 is the ending 
//		index
// 
// POST-CONDITIONS
//		The reversion outcome of the function
//
void reverseStr(char str[], int num1, int num2)
{
	char temp;
	if (num1 <= num2)
	{
		temp = str[num1 - 1];
		str[num1 - 1] = str[num2 - 1];
		str[num2 - 1] = temp;
		reverseStr(str, num1 + 1, num2 - 1);
	}
	else
		return;
}
//=================================================================================	
//
//==== reverseRecursively() =======================================================
// Mutator function 
// 
// This function is a mutator function, and the purpose of this function is to
// reverse the the characters in a string or character array given two indices
// by using the iterative way which is a for loop
//
// PRE-CONDITIONS
//		The origin array str[], num1 is the starting index, and num2 is the ending 
//		index
// 
// POST-CONDITIONS
//		The reversion outcome of the function
//
void reverseRecursively(char str[], int num1, int num2)
{
	char temp;
	while (num1 < num2)
	{
		temp = str[num1 - 1];
		str[num1 - 1] = str[num2 - 1];
		str[num2 - 1] = temp;
		num1++;
		num2--;
	}
}