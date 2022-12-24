/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #14: Linked Lists
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 04/27/2021
*********************************************************/
#include <iostream>
#include "doublyLinkedList.h"

using namespace std;
/**********************************************************
*
* Linked Lists
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
	cout << " Assignment #14: Linked Lists\n";
	cout << "*****************************************\n";


	//Create a doubly linked list with at least five nodes using a
	//	class template with template methods
	//	a.Print the linked list

	// Start with the empty list
	doublyLinkedList <int> list1;		// declare an integer list1
	list1.initializeList();				// initialize the list1
	list1.insert(88);					// put five nodes using a class template
	list1.insert(78);
	list1.insert(12);
	list1.insert(28);
	list1.insert(10);
	cout << "Linked list 1: ";
	list1.print();
	// 2
	//Develop and test the copy constructor and overloaded copy assignment operator.
	cout << "Test the copy constructor:  \n";
	
	doublyLinkedList <int> list2 = list1;		// call the copy constructor
	cout << "Linked list 1: ";
	list1.print();
	cout << "Linked list 2: ";
	list2.print();

	/*cout << "\nTest the assignment operator:  First initialize queueCopy to be a empty queue\n"
		<< "And then call the assignment operator method to copy queue1 to queueCopy:\n\n";
	queueCopy.initializeQueue();
	queueCopy = queue1;
	cout << "Output queueCopy:\n";
	queueCopy.print();
	



	list2 = list1;				// call the assignment operator
	cout << "Linked list 1: ";
	list1.print();
	*/
	// 3
	cout << "Linked list 2 in reverse order: ";
	list2.reversePrint();
	// 4
	list1.deleteNode(3);
	cout << "Linked list 1: ";
	list1.print();
	// 5







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