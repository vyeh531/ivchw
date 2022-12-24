/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #5	: STL Vectors
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/23/2021
*********************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> Lotto(int spot, int selected);
/**********************************************************
*
* STL Vectors
*_________________________________________________________
* This program uses random_shuffle to get the numbers of
* winners lotto
*_________________________________________________________
* INPUT:
* winner: A vector
*
* OUTPUT:
* winner: A vector after the function Lotto()
***********************************************************/
int main()
{
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #5	: STL Vectors\n";
	cout << "*****************************************\n";

	// Answer 1
	cout << "A1. STL, Standard Template Library, is a holder object which stores a collection of other objects,\n"
		<< "\tand it uses tmplates to provide compile-time polymorphism.\n"
		<< "\tVector is a type of STL containers that is a sequential container class, and vector is implemented as a dynamic array.\n\n";
	// Answer 2
	cout << "A2. vectorList.resize() This vector operation changes the size of a vector after construction.\n\n";
	// Answer 3
	cout << "A3. STL Array container is a collection of homogenous objects, and it provides us the implementation of static array.\n"
		<< "\tThe differences between STL array container and the built-in array are: \n"
		<< "\t\tSTL array allow being copied and decay into pointers only when it is a member data.\n"
		<< "\t\tThe built-array does not require #include <array> Also, the declarations of the array of them are different.\n"
		<< "\tThe differences between STL array and vector are:\n"
		<< "\t\tArray is a fixed-size sequential collection of elements of same data type, and it is index based.\n"
		<< "\t\tVector is a sequential container to store data, and it does not have index.\n"
		<< "\t\tVector is dynamic and needs more memory, so it takes more time\n\n";
	// Answer 4
	cout << "A4. The vector member function resize() inserts or deletes appropriate number of elements to the \n"
		<< "\tvector to make it given size, size, so it will affect the size().\n"
		<< "\tHowever, the reserve() only allocates memory, but leaves it uninitialized, \n"
		<< "\tand it only affects capacity(), but size() will not be changed.\n"
		<< "\tTherefore, use resize() when you want the compiler set default items. \n"
		<< "\tUse reserve(), if you want an array to which you expect to insert items and want to avoid a couple of allocations.\n\n";
	// Answer 5
	cout << "A5. begin() returns iterator to beginning, and end() returns iterator to end.\n\n";
	// Answer 6
	cout << "A6. push_back(item) means a copy of item is inserted at end of list. Below is the example of it.\n\n";

	//==============
	vector<int> winners;		// declare the vector
	winners = Lotto(51, 6);		// call Lotto function to get winners lotto
	
	cout << "Winner's Lotto contains:";
	for (int i = 0; i < winners.size(); ++i)	// cout the winners lotto vector
	{
		cout << winners.at(i) << "\t";
	}


	// INPUT: A vacancy vector
	// PROCESSING:	First, print out the answers for the 6 questions on the homework sheet
	//				Second, call the Lotto() to set random numbers from the lotery card
	//				Third, print out the winners lotto vector with "selected" numbers of 
	//				random numbers from the numbers of "spot"
	//
	// OUTPUT:	First, the answers for the 6 questions on the homework sheet
	//			Second, the numbers of winners lotto vector in ordered
	return 0;
}
//=================================================================================
//
//==== Lotto() ====================================================================
// Mutator function 
// 
// This function is a mutator function, and the purpose of this function is to
//  do the random_shuffle and return the vector
//
// PRE-CONDITIONS
//		Two integers: - spot: the number of spots on a lottery card
//					  - selected: the number of spots selected at random
// POST-CONDITIONS
//		A winners lotto vector with "selected" numbers of random numbers 
//		from the numbers of "spot"
//
vector <int> Lotto(int spot, int selected)
{
	vector<int> winners;
	vector<int> randomNumber;	// tempory vector

	for (int i = 1; i < spot; ++i)		// Have the function create a vector 
										// that contains all the possible values
	{
		randomNumber.push_back(i);
	}
	random_shuffle(randomNumber.begin(), randomNumber.end());
	for (int i = 0; i < selected; ++i)
	{
		winners.push_back(randomNumber.at(i));
	}
	sort(winners.begin(), winners.end());

	return winners;
}