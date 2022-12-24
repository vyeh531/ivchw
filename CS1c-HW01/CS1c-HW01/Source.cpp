// hw01.cpp
// to review the skills that are leared before and use random
// number generator

/*********************************************************
* AUTHOR			: Vivian Yeh
* Assignment #1		: Random Numbers
* CLASS				: CS1C
* SECTION			: TTh 12:30pm ¡V 01:45pm
* Due Date			: 1/26/2021
*********************************************************/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void readFile(int SIZE, int randomNum[]);
void displayFile(int SIZE, int randomNum[]);
/**********************************************************
* USE A RANDOM NUMBER GENERATOR, USE A ENUM, TYPEDEF, AND 
* STRING VARIABLE, WRITE/READ DATA IN ARRAY TO/FROM EXTERNAL 
* FILE
*_________________________________________________________
* This program uses a random number generator to generate 
* a three-digit integer that allows the user to perform:
* 1.Sum the digits, 2.Triple the number, 3.Reverse the digits
* This program uses an enum, typedef, and string variable, and
* store 10 random numbers in an array, and then sort the array.
* After that, this program write the array to an external file,
* and read the external file, and display the array.
*_________________________________________________________
* INPUT:
* answer: A integer which represents the choice of user -> input from user
* randomNumber: The random number from the generator -> input from program
* randomNum[]: The 10 random numbers from the generator -> input from program
* 
* OUTPUT:
* sum: The sum of the three digits of the random number
* tripleNum: The triple number of the random number
* reverseNumber: The reverse number of the random number
***********************************************************/
int main()
{
	const int SIZE = 10;			//INPUT - the size of randomNum array
	int randomNumber = 0;			//CALC & OUT  - the number from the random number generator
	int randomNum[SIZE] = { 0 };	//CALC & OUT  - array of random numbers from the random number generator
	int answer = 0;					//INPUT - the choice about calculation by user
	int sum = 0;					//CALC & OUT - The sum of the three digits of the random number
	int digits = 0;					//CALC & OUT - The digits of the random number 
	int tens = 0;					//CALC & OUT - The tens of the random number
	int hundreds = 0;				//CALC & OUT - The hundreds of the random number
	double tripleNum = 0;			//CALC & OUT - The triple number of the random number
	int remainder = 0;				//CALC & OUT - The outcome of randomNumber % 10
	int reverseNumber = 0;			//CALC & OUT - The reverse number of the random number
	int temp = 0;					//CALC & OUT - The temperary lowest number of the array

	
	// output the class heading to the screen
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #1	: Random Numbers\n";
	cout << "*****************************************\n";

	//random number generator to generate a three-digit integer and do some calculations
	cout << "This is the three-digit integer from random number generator: ";
	srand((unsigned)time(0));
	randomNumber = (rand() % 900) + 100;
	cout << randomNumber << endl;
	
	// ask the user to choose a type of three calculations
	cout << "\nPlease choose one of the calculations and Enter the heading number\n"
		<< "1. Sum the digits\n"
		<< "2. Triple the number\n"
		<< "3. Reverse the digits\n";

	cin >> answer;					

	if (answer == 1)	// Sum the digits
	{
		hundreds = randomNumber / 100;
		tens = (randomNumber % 100) / 10;
		digits = randomNumber % 10;
		sum = hundreds + tens + digits;

		cout << "\nThe sum of three digits is: " << sum << endl;
	}
	else if (answer == 2)	// Triple the number
	{
		cout << "\nThe following are the triple of the number:\n";
		tripleNum = pow(randomNumber, 3);
		cout << fixed << setprecision(0) << pow(randomNumber, 3) << "\n";
		
	}
	else if (answer == 3)	// Reverse the digits
	{
		cout << "\nThe following are the reverse of the number:\n";

		while (randomNumber != 0)
		{
			remainder = randomNumber % 10;
			reverseNumber = reverseNumber * 10 + remainder;
			randomNumber /= 10;
		}
		cout << reverseNumber << "\n";
	}
	else             // test if the user's input(answer) is valid
	{
		cout << "Invalid enter! The program is closing...\n";
		exit(1);
	}

	// enum part  Use an enum variable
	enum colors { BLUE, RED, YELLOW, PINK};
	
	// typedef part  Use a typedef
	typedef unsigned short int USHORT;

	// string part  Use a string variable
	string courseName;

	// get 10 random numbers
	srand((unsigned)time(0));
	cout << "\nNow we got ten random numbers\n";
	for (int i = 0; i < SIZE; i++)
	{
		randomNum[i] = rand();
	}

	// sort the 10 random numbers array (low to high)
	for (int j = 0; j < SIZE; j++)
	{
		for (int k = j + 1; k < SIZE; k++)
		{
			if (randomNum[k] < randomNum[j])
			{
				// swap lowest with randomNum[j]
				temp = randomNum[j];
				randomNum[j] = randomNum[k];
				randomNum[k] = temp;
			}
		}
	}

	//Write the array to an external file
	ofstream outFile;
	outFile.open("c:\\tenRandomNumbers.txt");
	if (!outFile)
	{
		cout << "Error opening file.\n";
		exit(2);
	}

	for (int i = 0; i < SIZE; i++)
	{
		outFile << randomNum[i] << endl;
	}
	cout << "\nNow writing the array to an external file\n";
	outFile.close();

	//read the external file
	readFile(SIZE, randomNum);

	// print the array
	displayFile(SIZE, randomNum);
	
	// INPUT: A description of what is being input.
	// PROCESSING: Detail what is being processed.
	// OUTPUT: Details of what is being output.
	return 0;
}
//---------------------------------------------------------
//
//---- readFile() -----------------------------------------
void readFile(int SIZE, int randomNum[])
{
	ifstream inFile;
	inFile.open("c:\\tenRandomNumbers.txt");

	if (!inFile)
	{
		cout << "Error opening file.\n";
		exit(3);
	}
	for (int i = 0; i < SIZE; i++)
	{
		inFile >> randomNum[i];
	}
	cout << "\nNow reading the external file\n";
	inFile.close();
}
//---------------------------------------------------------
//
//---- displayFile() --------------------------------------
void displayFile(int SIZE, int randomNum[])
{
	for (int i = 0; i < SIZE; i++)
	{

		cout << randomNum[i] << endl;
	}
}
/**********************************************************
* OUTPUT
* *****************************************
 Programmed by  : Vivian Yeh
 Student ID     : 1154474
 CS1C           : TTh 12:30pm ¡V 01:45pm
 Assignment #1  : Random Numbers
*****************************************
This is the three-digit integer from random number generator: 341

Please choose one of the calculations and Enter the heading number
1. Sum the digits
2. Triple the number
3. Reverse the digits
1

The sum of three digits is: 8

Now we got ten random numbers

Now writing the array to an external file

Now reading the external file
82
1137
5643
6272
16947
18118
19148
25854
31065
31548

C:\Users\viviy\source\repos\CS1c-HW01\Debug\CS1c-HW01.exe (process 16508) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
* 
* 
* 
* 
***********************************************************/