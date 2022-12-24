#include "doublyLinkedList.h"

template <class Type>
const doublyLinkedList<Type>& doublyLinkedList<Type>::operator=(const doublyLinkedList<Type>& otherList)
{
    cout << "The assignment operator is called." << endl;
   // nodeType<Type>* new_first = new nodeType<Type>;
  //  nodeType<Type>* new_last = new nodeType<Type>;

    
  //  delete[] first;
   // delete[] last;
  //  first = new_first;
  //  last = new_last;

  //  count = otherList.count;

    return *this;
}// copy assignment operator

/*
    for (int i = 0; i < otherQueue.maxQueueSize; i++)
    {
        new_list[i] = otherQueue.list[i];
    }
    delete[] list;
    list = new_list;
    maxQueueSize = otherQueue.maxQueueSize;
    count = otherQueue.count;
    queueFront = otherQueue.queueFront;
    queueRear = otherQueue.queueRear;

    return *this;
}// copy assignment operator
*/





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
    first = nullptr;
    last = nullptr;
    count = 0;
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

    if (first == nullptr) //if the list is empty, newNode is 
                      //the only node
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
    return *this;
}


template <class Type>
doublyLinkedList<Type>::~doublyLinkedList()
{
    if (first != 0)
    {
        nodeType<Type>* current, * soon;
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
doublyLinkedList<Type>::doublyLinkedList(const doublyLinkedList<Type>& otherList)
{
    cout << "The copy constructor is called." << endl;
    nodeType* newNodeType = new nodeType; //pointer to create a node
    nodeType* current; //pointer to traverse the list

    current = otherList.first; //current points to the list to be copied
    count = otherList.count;//copy the first node
    first = new nodeType; //create the node
    first->info = current->info; //copy the info
    first->next = current->next; //set the link field of the node to NULL
    first->back = current->back;

    last = first; //make last point to the first node

    current = current->next; //make current point to the next node
            //copy the remaining list

    while (current != NULL)
    {
        newNodeType = new nodeType; //create a node
        newNodeType->info = current->info; //copy the info
        newNodeType->next = current->next;
        newNodeType->back = current->back;
        last->next = newNodeType;
        last = newNodeType;
        current = current->next;
    }
    return *this;
}

/*
template <class Type>
queueType<Type>::queueType(const queueType<Type>& otherQueue) : maxQueueSize{ otherQueue.maxQueueSize },
queueFront{ otherQueue.queueFront }, queueRear{ otherQueue.queueRear },
list{ new Type[otherQueue.maxQueueSize] }, count{ otherQueue.count }
{
    cout << "The copy constructor is called." << endl;
    for (int i = 0; i < otherQueue.maxQueueSize; i++)
    {
        list[i] = otherQueue.list[i];
    }
}// copy constructor
*/