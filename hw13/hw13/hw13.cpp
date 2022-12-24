/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #13: Exceptions
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 04/15/2021
*********************************************************/
#include <iostream>
#include <cassert>
#include "hw13.h"

using namespace std;

/**********************************************************
*
* Exceptions
*
*_________________________________________________________
* This program uses an array-based queue to keeps track of
* the tail of the queue where new items are added
*_________________________________________________________
* INPUT:
* queue1: The integer array
* queue2: The double array
* queue3: The string array
* queue4: The integer array
*
* OUTPUT:
* The queue after each operation (addition and deletion)
* for queue1, queue2, and queue3.
* Use queue4 to test isEmpty() and isFull()
**********************************************************/
int main()
{
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C			: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #13: Exceptions\n";
	cout << "*****************************************\n";

	queueType<int> queue1;			// declare an integer queue1

	//Develop and test the copy constructor and overloaded copy assignment operator.
	cout << "Test the copy constructor\n";
	queue1.initializeQueue();
	queueType<int> queueCopy = queue1;

	cout << "\nTest the assignment operator\n";
	queue1 = queueCopy;

	cout << "\nThe following is the elements of queue 1\n";
	for (int i = 1; i <= 10; i++)		// Perform ten additions
	{
		queue1.enqueue(i);
		queue1.print();
	}

	//-------------------------------------
	//Adding to a full queue and removing from an empty queue
	cout << "\n\nAdding to a full queue which is queue1\n";
	while (!queue1.isFull())	// create a full queue
		queue1.enqueue(1);

	//Use try/catch exception to check if the queue is full ----- Here is my revision!!!
	try
	{
		queue1.enqueue(1);
		if (queue1.isFull() == true)
			throw 1;
	}
	catch (int)
	{
		cout << "Line 68: The capacity is exceeded. Cannot add to a full queue." << endl;
	}

	
	cout << "\nRemoving from an empty queue which is queue1\n";
	while (!queue1.isEmpty())
		queue1.dequeue();

	try
	{
		queue1.dequeue();
		if (queue1.isEmpty() == true)
			throw 2;
	}
	catch (int)
	{
		cout << "Line 84:  Remove from an empty queue. Cannot remove from an empty queue." << endl;
	}


	// Following an exception, the program should allow one to recover 
	// from a mistake without corrupting the contents of the queue.

	queueType<int> queue2;			// declare an integer queue2
	queue2.initializeQueue();
	bool done = false;
	int number;
	string str = "This is an invalid input.\n";

	do
	{
		try
		{
			cout << "Enter an integer to put in the queue:\n";
			cin >> number;
			cout << endl;

			if (!cin)
				throw str;
			done = true;
			try
			{
				queue2.enqueue(number);
				if (queue2.isFull() == true)
					throw 1;
			}
			catch (int)
			{
				cout << "Line 68: The capacity is exceeded. Cannot add to a full queue." << endl;
			}
		}
		catch (string wrongInput)
		{
			cout << "Line 95: " << wrongInput << endl;
			cout << "Line 96: Restoring the input \n";
			cin.clear();
			cin.ignore(100, '\n');
		}
	} 
	while (!done);


	// Test the assert macro (both pass and fail)
	// print a corresponding output statement.

	assert(("Pass!!!", 2 + 2 == 4));	// pass case
	assert(("Fail!!!", 2 + 2 != 5));	// fail case



	return 0;


	// INPUT: Three queues with different data type to test the addition and deletion
	//			One queue to test the isFull() and isEmpty().
	// PROCESSING:	First add ten datas in the queue, delete four datas from the queue,
	//				add nine datas in the queue, and remove three datas from the queue. 
	//				Print out the queue after each operation. (repeat this progress for 
	//				three data types: integer, double, string)
	//				Create queue4 to test the isFull() and isEmpty() in pass and fail
	//				conditions
	//
	// OUTPUT:		The elements in the three queues after each operation.
	//				The testing results of isFull() and isEmpty() in pass and fail
	//				conditions
	return 0;
}