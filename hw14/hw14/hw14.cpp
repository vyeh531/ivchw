/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #14: Linked Lists
* CLASS			: CS1C
* SECTION		: TTh 12:30pm �V 01:45pm
* Due Date		: 04/27/2021
*********************************************************/
#include <iostream>
#include "doublyLinkedList.cpp"

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
* list1: An integer list
* list2: An integer list
* list3: An integer list
* list4: A double list
* list5: A double list
* list6: A double list
*
* OUTPUT:
* Insert 5 nodes to the list, and then delete a nonexisting
* node from the list and delete from an empty list
* Insert a node at the middle of the list, and print it out
* Repeat all the process for a double data type
**********************************************************/
int main()
{
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm - 01:45pm\n";
	cout << " Assignment #14: Linked Lists\n";
	cout << "*****************************************\n";


	//  Create a doubly linked list with at least five nodes using a
	//	class template with template methods
	//	a.Print the linked list
	
	cout << "Part 1:\n\n";
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
	cout << "\n\nPart 2:\n";
	cout << "\n\nHere calls the copy constructor:\n";
	doublyLinkedList <int> list2 = list1;		// call the copy constructor
	cout << "Linked list 1: ";
	list1.print();

	cout << "\n\nHere calls the assignment operator:\n";
	list2 = list1;				// call the assignment operator
	cout << "Linked list 1: ";
	list1.print();

	// 3
	cout << "\n\nPart 3:\n";
	cout << "\n\nLinked list 2 in reverse order: ";
	list2.reversePrint();

	// 4
	cout << "\n\nPart 4:\n";
	cout << "\n\nDelete a node that is not in list 1: ";
	list1.deleteNode(3);
	cout << "\nLinked list 1: ";
	list1.print();
	list1.deleteNode(12);
	list2.deleteNode(12);
	cout << "\n\nDelete a node from an empty list 3: ";
	doublyLinkedList <int> list3;		// declare an empty integer list3
	list3.initializeList();				// initialize the list3
	cout << "\n\nLinked list 3: ";
	list3.deleteNode(1);

	// 5
	cout << "Part 5:\n";
	cout << "\n\nInsert a node at the middle of list1: ";
	list1.insertAtMid(100);
	list1.print();
	cout << "\n\nInsert a node at the middle of list2: ";
	list2.print();


	// 6 (repeat 1 - 5 with double)
	cout << "\n\nRepeat Part 1 - Part 5 with double:\n\n";
	cout << "Part 1:\n";
	doublyLinkedList <double> list4;		// declare an integer list4
	list4.initializeList();				// initialize the list14
	list4.insert(898);					// put five nodes using a class template
	list4.insert(758);
	list4.insert(162);
	list4.insert(328);
	list4.insert(160);
	cout << "Linked list 4: ";
	list4.print();

	// 2
	cout << "\n\nPart 2:\n";
	cout << "\n\nHere calls the copy constructor:\n";
	doublyLinkedList <double> list5 = list4;		// call the copy constructor
	cout << "Linked list 4: ";
	list4.print();

	cout << "\n\nHere calls the assignment operator:\n";
	list5 = list4;				// call the assignment operator
	cout << "Linked list 4: ";
	list4.print();

	// 3
	cout << "\n\nPart 3:\n";
	cout << "\n\nLinked list 5 in reverse order: ";
	list5.reversePrint();
	
	// 4
	cout << "\n\nPart 4:\n";
	cout << "\n\nDelete a node that is not in list 4: ";
	list4.deleteNode(3);
	cout << "\nLinked list 4: ";
	list4.print();
	list4.deleteNode(162);
	list5.deleteNode(162);
	cout << "\n\nDelete a node from an empty list 6: ";
	doublyLinkedList <double> list6;		// declare an empty integer list3
	list6.initializeList();				// initialize the list3
	cout << "\n\nLinked list 6: ";
	list6.deleteNode(1);
	
	// 5
	cout << "\nPart 5:\n";
	cout << "\n\nInsert a node at the middle of list 4: ";
	list4.insertAtMid(1000);
	list4.print();
	cout << "\n\nInsert a node at the middle of list 5: ";
	list5.print();
	
	//list1.~doublyLinkedList();


	// INPUT: 6 doubly linked list, 3 are integer lists, and 3 are the double lists
	// PROCESSING:	First insert 5 nodes to the list, and then delete a nonexisting
	//				node from the list and delete from an empty list
	//				Insert a node at the middle of the list, and print it out
	//				Repeat all the process for a double data type
	//
	// OUTPUT:		The elements in the three lists after each operation.
	return 0;
}