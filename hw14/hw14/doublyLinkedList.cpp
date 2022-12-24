/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #14: Linked Lists
* CLASS			: CS1C
* SECTION		: TTh 12:30pm - 01:45pm
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
    // ==== insertAtMid() =============================================================
    // Insert insertItem at the middle of the list
    //
    // PRE-CONDITIONS
    //      If the list is nonempty, it must add middle of the list 
    // POST-CONDITIONS
    //      insertItem is inserted at the proper place in the list, first points to the 
    //      first node, last points to the last node of the new list, and count is 
    //      incremented by 1
    //=================================================================================
    void insertAtMid(const Type& insertItem);
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
    void copyList(const doublyLinkedList<Type>& otherList);
};

template <class Type>
const doublyLinkedList<Type>& doublyLinkedList<Type>::operator=(const doublyLinkedList<Type>&)
{
    this->count = count;
    this->first = first;
    this->last = last;

    return *this;
}


template <class Type>
doublyLinkedList<Type>::doublyLinkedList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

template <class Type>
bool doublyLinkedList<Type>::isEmptyList() const
{
    return (first == nullptr);
}

template <class Type>
void doublyLinkedList<Type>::destroy()
{
    nodeType<Type>* temp;

    while (first != nullptr)
    {
        temp = first;
        first = first->next;
        delete temp;
    }

    last = nullptr;
    count = 0;
}

template <class Type>
void doublyLinkedList<Type>::initializeList()
{
    destroy();
}

template <class Type>
int doublyLinkedList<Type>::length() const
{
    return count;
}

template <class Type>
void doublyLinkedList<Type>::print() const
{
    nodeType<Type>* current;

    current = first; 

    while (current != nullptr)
    {
        cout << current->info << "  ";
        current = current->next;
    }
}


template <class Type>
void doublyLinkedList<Type>::reversePrint() const
{
    nodeType<Type>* current;

    current = last;

    while (current != nullptr)
    {
        cout << current->info << "  ";
        current = current->back;
    }
}

template <class Type>
bool doublyLinkedList<Type>::search(const Type& searchItem) const
{
    bool found = false;
    nodeType<Type>* current;
    current = first;

    while (current != nullptr && !found)
        if (current->info >= searchItem)
            found = true;
        else
            current = current->next;

    if (found)
        found = (current->info == searchItem);
    return found;
}

template <class Type>
Type doublyLinkedList<Type>::front() const
{
    assert(first != nullptr);

    return first->info;
}

template <class Type>
Type doublyLinkedList<Type>::back() const
{
    assert(last != nullptr);

    return last->info;
}

template <class Type>
void doublyLinkedList<Type>::insert(const Type& insertItem)
{
    nodeType<Type>* current;      //pointer to traverse the list
    nodeType<Type>* trailCurrent = NULL; //pointer just before current
    nodeType<Type>* newNode;      //pointer to create a node
    bool found;

    newNode = new nodeType<Type>; //create the node
    newNode->info = insertItem;  //store the new item in the node
    newNode->next = nullptr;
    newNode->back = nullptr;

    if (first == nullptr) //if the list is empty, newNode is the only node
    {
        first = newNode;
        last = newNode;
        count++;
    }
    else
    {
        found = false;
        current = first;

        while (current != nullptr && !found) //search the list
            if (current->info >= insertItem)
                found = true;
            else
            {
                trailCurrent = current;
                current = current->next;
            }

        if (current == first) //insert newNode before first
        {
            first->back = newNode;
            newNode->next = first;
            first = newNode;
            count++;
        }
        else
        {
            //insert newNode between trailCurrent and current
            if (current != nullptr)
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                newNode->next = current;
                current->back = newNode;
            }
            else
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                last = newNode;
            }
            count++;
        }
    }
}


template <class Type>
void doublyLinkedList<Type>::insertAtMid(const Type& insertItem)
{
    nodeType<Type>* current;      //pointer to traverse the list
    nodeType<Type>* newNode;      //pointer to create a node

    newNode = new nodeType<Type>; //create the node
    newNode->info = insertItem;  //store the new item in the node
    newNode->next = nullptr;
    newNode->back = nullptr;

    if (first == nullptr) //if the list is empty, newNode is the only node
    {
        first = newNode;
        last = newNode;
        count++;
    }
    else
    {
        int len = 0;
        current = first;
        // calculate length of the linked list (i.e, the number of nodes)
        while (current != NULL) {
            len++;
            current = current->next;
        }

        // 'count' the number of nodes after which
        //  the new node is to be inserted
        int count = ((len % 2) == 0) ? (len / 2) :
            (len + 1) / 2;
        current = first;

        // 'ptr' points to the node after which
        // the new node is to be inserted
        while (count-- > 1)
            current = current->next;

        // insert the 'newNode' and adjust the
        // required links
        newNode->next = current->next;
        current->next = newNode;

        count++;
    }
}


template <class Type>
void doublyLinkedList<Type>::deleteNode(const Type& deleteItem)
{
    nodeType<Type>* current; //pointer to traverse the list
    nodeType<Type>* trailCurrent; //pointer just before current

    bool found;

    if (first == nullptr)
        cout << "Cannot delete from an empty list." << endl;
    else if (first->info == deleteItem)
    {
        current = first;
        first = first->next;

        if (first != nullptr)
            first->back = nullptr;
        else
            last = nullptr;

        count--;

        delete current;
    }
    else
    {
        found = false;
        current = first;

        while (current != nullptr && !found)
            if (current->info >= deleteItem)
                found = true;
            else
                current = current->next;

        if (current == nullptr)
            cout << "The item to be deleted is not in "
            << "the list." << endl;
        else if (current->info == deleteItem)
        {
            trailCurrent = current->back;
            trailCurrent->next = current->next;

            if (current->next != nullptr)
                current->next->back = trailCurrent;

            if (current == last)
                last = trailCurrent;

            count--;
            delete current;
        }
        else
            cout << "The item to be deleted is not in list."
            << endl;
    }
}


template <class Type>
doublyLinkedList<Type>::doublyLinkedList(const doublyLinkedList<Type>& otherList)
{
    count = otherList.count;
    first = otherList.first;
    last = otherList.last;
}


template <class Type>
doublyLinkedList<Type>::~doublyLinkedList()
{
    if (first != 0)
    {
        nodeType<Type> *current, *soon;
        current = this->first->next;
        while (current != 0)
        {
            if (current->next != 0)
            {
                soon = current->next;
                delete current;
                current = soon;
            }
            else
            {
                delete current;
                break;
            }
        }
    }
    delete this->first;
    delete this->last;
}
template <class Type>
void doublyLinkedList<Type>::copyList(const doublyLinkedList<Type>& otherList)
{
    count = otherList.count;
    first = otherList.first;
    last = otherList.last;
}

#endif