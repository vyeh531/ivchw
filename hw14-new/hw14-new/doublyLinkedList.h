/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #14: Linked Lists
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 04/27/2021
*********************************************************/
//doublyLinkedList.h
#ifndef doublyLinkedList_H
#define doublyLinkedList_H

#include <iostream>

using namespace std;

template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type>* next;
    nodeType<Type>* back;
};

template <class Type>
class doublyLinkedList
{
public:
    // ==== operator=() ==============================================================
    // Assign a doubly Linked List to another one
    //
    // PRE-CONDITIONS
    //      An origin doubly Linked List
    // POST-CONDITIONS
    //      The doubly Linked List is same as the assigned one
    //=================================================================================
    const doublyLinkedList<Type>& operator=(const doublyLinkedList<Type>&);
    // ==== initializeList() ==========================================================
    // Initialize the doubly Linked List to an empty doubly Linked List
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      first = nullptr; last = nullptr; count = 0;
    //=================================================================================
    void initializeList();
    // ==== isEmptyList ===============================================================
    // Test and determine whether the list is empty
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      ture - the list is empty
    //      false - the list is not empty
    //=================================================================================
    bool isEmptyList() const;
    // ==== destroy ===================================================================
    // Delete all the nodes from the list
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      first = nullptr; last = nullptr; count = 0;
    //=================================================================================
    void destroy();
    // ==== print() ===================================================================
    // Print all the info contained in each node
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      none
    //=================================================================================
    void print() const;
    // ==== print() ===================================================================
    // Print all the info contained in each node in reverse order
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      none
    //=================================================================================
    void reversePrint() const;
    // ==== print() ===================================================================
    // Print all the number of nodes in the list
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      The value of count
    //=================================================================================
    int length() const;
    // ==== front() ===================================================================
    // Return the first element of the list
    //
    // PRE-CONDITIONS
    //      The list must exist and must not be empty
    // POST-CONDITIONS
    //      If the list is empty, the program terminates; otherwise, the first element
    //      of the list is returned
    //=================================================================================
    Type front() const;
    // ==== back() ====================================================================
    // Return the last element of the list
    //
    // PRE-CONDITIONS
    //      The list must exist and must not be empty
    // POST-CONDITIONS
    //      If the list is empty, the program terminates; otherwise, the last element
    //      of the list is returned.
    //=================================================================================
    Type back() const;
    // ==== search() ==================================================================
    // Determine whether searchItem is in the list
    //
    // PRE-CONDITIONS
    //      None
    // POST-CONDITIONS
    //      Returns true if searchItem is found in the list, otherwise returns false
    //=================================================================================
    bool search(const Type& searchItem) const;
    // ==== insert() ==================================================================
    // Insert insertItem in the list
    //
    // PRE-CONDITIONS
    //      If the list is nonempty, it must be in order
    // POST-CONDITIONS
    //      insertItem is inserted at the proper place in the list, first points to the 
    //      first node, last points to the last node of the new list, and count is 
    //      incremented by 1
    //=================================================================================
    void insert(const Type& insertItem);
    // ==== deleteNode() ==============================================================
    // Delete deleteItem from the list
    //
    // PRE-CONDITIONS
    //      None
    // POST-CONDITIONS
    //      If found, the node containing deleteItem is deleted from the list; first 
    //      points to the first node of the new list, last points to the last node of 
    //      the new list, and count is decremented by 1; otherwise, an appropriate 
    //      message is printed. 
    //=================================================================================
    void deleteNode(const Type& deleteItem);
    // ==== doublyLinkedList() ========================================================
    // Default constructor
    // Initializes the list to an empty state
    //
    // PRE-CONDITIONS
    //      None
    // POST-CONDITIONS
    //      first = nullptr; last = nullptr; count = 0;
    //=================================================================================
    doublyLinkedList();
    // ==== doublyLinkedList() ========================================================
    // Copy constructor
    // Copy the list to an empty list
    //
    // PRE-CONDITIONS
    //      None
    // POST-CONDITIONS
    //      None
    //=================================================================================
    doublyLinkedList(const doublyLinkedList<Type>& otherList);
    // ==== ~doublyLinkedList() =======================================================
    // Destructor
    // 
    // PRE-CONDITIONS
    //      None
    // POST-CONDITIONS
    //      The list object is destroyed
    //=================================================================================
    ~doublyLinkedList();

protected:
    int count;
    nodeType<Type>* first; //pointer to the first node
    nodeType<Type>* last;  //pointer to the last node

private:
    // ==== copyList() ================================================================
    // Make a copy of otherList
    // 
    // PRE-CONDITIONS
    //      None
    // POST-CONDITIONS
    //      A copy of otherList is created and assigned to this list.
    //=================================================================================
    doublyLinkedList(const doublyLinkedList<Type>& otherList);
};
#endif