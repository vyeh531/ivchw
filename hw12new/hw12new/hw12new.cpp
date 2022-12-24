/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #12: Templates (Queues)
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 04/15/2021
*********************************************************/
#include <iostream>
#include "arrayList.h"

using namespace std;

/**********************************************************
*
* Templates (Queues) - use an queue in a template way
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
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #12: Templates (Queues)\n";
	cout << "*****************************************\n";

	queueType<int> queue1;			// declare an integer queue1
	queueType<double> queue2;		// declare a double queue2
	queueType<string> queue3;		// declare a string queue3
	queueType<int> queue4;			// declare an integer queue1


	//Develop and test the copy constructor and overloaded copy assignment operator.
	cout << "Test the copy constructor:  First initialize queue1 by adding number 1 - 10\n"
		<< "And then copy queue1 to a new queue which is queueCopy:\n\n";
	queue1.initializeQueue();
	for (int i = 1; i <= 10; i++)		// Perform ten additions
	{
		queue1.enqueue(i);
	}
	queueType<int> queueCopy = queue1;
	cout << "Output queueCopy:\n";
	queueCopy.print();
	

	cout << "\nTest the assignment operator:  First initialize queueCopy to be a empty queue\n"
		<< "And then call the assignment operator method to copy queue1 to queueCopy:\n\n";
	queueCopy.initializeQueue();
	queueCopy = queue1;
	cout << "Output queueCopy:\n";
	queueCopy.print();

	//Perform six additions, four deletions, five additions, three 
	//deletions.Print the queue after each operation(there should be
	//	about 25 output statements per data type)

	//--- queue1 --------------------------
	cout << "\nThe first queue is an integer queue:\n"
		<< "Perform 10 additions, 4 deletions, 9 additions, 3 deletions:\n";
	queue1.initializeQueue();
	for (int i = 1; i <= 10; i++)		// Perform ten additions
	{
		queue1.enqueue(i);
		queue1.print();
	}
	queue1.dequeue();					// Perform four deletions
	queue1.print();
	queue1.dequeue();
	queue1.print();
	queue1.dequeue();
	queue1.print();
	queue1.dequeue();
	queue1.print();
	for (int i = 11; i <= 20; i++)		// Perform nine additions
	{
		queue1.enqueue(i);
		queue1.print();
	}
	queue1.dequeue();					// Perform three deletions
	queue1.print();
	queue1.dequeue();
	queue1.print();
	queue1.dequeue();
	queue1.print();
	
	// Test size()
	cout << "\nThe number of elements stored in queue1 is: " << queue1.size();
	
	//--- queue2 --------------------------
	cout << "\n\nThe second queue is a double queue:\n"
		<< "Perform 10 additions, 4 deletions, 9 additions, 3 deletions:\n";
	queue2.initializeQueue();
	for (int i = 100; i <= 110; i++)		// Perform ten additions
	{
		queue2.enqueue(i);
		queue2.print();
	}
	queue2.dequeue();					// Perform four deletions
	queue2.print();
	queue2.dequeue();
	queue2.print();
	queue2.dequeue();
	queue2.print();
	queue2.dequeue();
	queue2.print();
	for (int i = 1100; i <= 1109; i++)		// Perform nine additions
	{
		queue2.enqueue(i);
		queue2.print();
	}
	queue2.dequeue();					// Perform three deletions
	queue2.print();
	queue2.dequeue();
	queue2.print();
	queue2.dequeue();
	queue2.print();
	//--- queue3 --------------------------
	cout << "\nThe third queue is a string queue:\n"
		<< "Perform 10 additions, 4 deletions, 9 additions, 3 deletions:\n";
	queue3.initializeQueue();
	queue3.enqueue("a");			// Perform ten additions
	queue3.print();
	queue3.enqueue("b");
	queue3.print();
	queue3.enqueue("c");
	queue3.print();
	queue3.enqueue("d");
	queue3.print();
	queue3.enqueue("e");
	queue3.print();
	queue3.enqueue("f");
	queue3.print();
	queue3.enqueue("g");
	queue3.print();
	queue3.enqueue("h");
	queue3.print();
	queue3.enqueue("i");
	queue3.print();
	queue3.enqueue("j");
	queue3.print();
	queue3.dequeue();					// Perform four deletions
	queue3.print();
	queue3.dequeue();
	queue3.print();
	queue3.dequeue();
	queue3.print();
	queue3.dequeue();
	queue3.print();
	queue3.enqueue("k");				// Perform nine additions
	queue3.print();
	queue3.enqueue("l");
	queue3.print();
	queue3.enqueue("m");
	queue3.print();
	queue3.enqueue("n");
	queue3.print();
	queue3.enqueue("o");
	queue3.print();
	queue3.enqueue("p");
	queue3.print();
	queue3.enqueue("q");
	queue3.print();
	queue3.enqueue("r");
	queue3.print();
	queue3.enqueue("s");
	queue3.print();
	queue3.dequeue();					// Perform three deletions
	queue3.print();
	queue3.dequeue();
	queue3.print();
	queue3.dequeue();
	queue3.print();
	//--- queue3 --------------------------
	//Adding to a full queue and removing from an empty queue
	cout << "\n\nAdding to a full queue which is queue4\n";
	queue4.initializeQueue();		// initialize queue4 to a empty queue
	while (!queue4.isFull())
		queue4.enqueue(1);
	queue4.enqueue(1);
	cout << "\nRemoving from an empty queue\n";
	while (!queue4.isEmpty())
		queue4.dequeue();
	queue4.dequeue();

	//Testing the isEmpty() and IsFull() methods for both the pass and fail conditions
	cout << "\nTest the isEmpty()\nPass condition:\n";
	if (queue4.isEmpty())
		cout << "The queue is empty.\n";
	else
		cout << "The queue is not empty.\n";
	while (!queue4.isFull())
		queue4.enqueue(1);
	cout << "\nFail condition:\n";
	if (queue4.isEmpty())
		cout << "The queue is empty.\n";
	else
		cout << "The queue is not empty.\n";

	cout << "\nTest the isFull()\nPass condition:\n";
	if (queue4.isFull())
		cout << "The queue is full.\n";
	else
		cout << "The queue is not full.\n";
	while (!queue4.isEmpty())
		queue4.dequeue();
	cout << "\nFail condition:\n";
	if (queue4.isFull())
		cout << "The queue is full.\n";
	else
		cout << "The queue is not full.\n";

	//Testing the front() method
	cout << "\nTesting the front() method by printing the first element of queue1: ";
	cout << queue1.front() << endl << endl;

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