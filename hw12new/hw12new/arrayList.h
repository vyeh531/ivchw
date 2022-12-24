/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #12: Templates (Queues)
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 04/15/2021
*********************************************************/
#ifndef hw12_H
#define hw12_H

#include <iostream> 
#include <cassert>

using namespace std;

template <class Type>
class queueType
{

private:
    int maxQueueSize; // the maximum queue size
    int count;        // the number of elements in the queue
    int queueFront;   // the first element of the queue
    int queueRear;    // the last element of the queue
    Type* list;       // a pointer to the array that holds the queue elements
public:
    // ==== operator=() ==============================================================
    // Assign a queue to another queue
    //
    // PRE-CONDITIONS
    //      An origin queue
    // POST-CONDITIONS
    //      The queue is same as the assigned one
    //=================================================================================
    const queueType<Type>& operator=(const queueType<Type>&);
    // ==== isEmptyQueue ==============================================================
    // Test and determine whether the queue is empty
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      ture - the queue is empty
    //      false - the queue is not empty
    //=================================================================================
    bool isEmpty() const;
    // ==== isFull() ==================================================================
    // Test and determine whether the queue is full
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      ture - the queue is full
    //      false - the queue is not full
    //=================================================================================
    bool isFull() const;
    // ==== initialize() ==============================================================
    // Initialize the queue to an empty queue
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      An empty queue
    //=================================================================================
    void initializeQueue();
    // ==== front() ===================================================================
    // Return the first element of the queue
    //
    // PRE-CONDITIONS
    //      A not empty queue
    // POST-CONDITIONS
    //      The first element of the queue if the queue is not empty
    //=================================================================================
    Type front() const;
    // ==== back() ====================================================================
    // Return the last element of the queue
    //
    // PRE-CONDITIONS
    //      A not empty queue
    // POST-CONDITIONS
    //      The last element of the queue if the queue is not empty
    //=================================================================================
    Type back() const;
    // ==== enqueue() ================================================================
    // Add an queueElement to the queue
    //
    // PRE-CONDITIONS
    //      A not full queue
    // POST-CONDITIONS
    //      The queueElement is added to the queue
    //=================================================================================
    void enqueue(const Type& queueElement);
    // ==== dequeue() =================================================================
    // Delete the first element of the queue
    //
    // PRE-CONDITIONS
    //      A not empty queue
    // POST-CONDITIONS
    //      The first element is removed from the queue
    //=================================================================================
    void dequeue();
    // ==== size() ====================================================================
    // Return the number of elements stored 
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      The number of elements stored in a queue
    //=================================================================================
    int size();
    // ==== print() ===================================================================
    // Print all the elements stored in the queue
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      The elements stored in an queue
    //=================================================================================
    void print();
    // ==== Constructor ===============================================================
    // 
    //=================================================================================
    queueType(int queueSize = 100);
    // ==== Copy constructor ==========================================================
    // 
    //=================================================================================
    queueType(const queueType<Type>& otherQueue);
    // ==== Destructor ================================================================
    // 
    //=================================================================================
    ~queueType();

};

template <class Type>
bool queueType<Type>::isEmpty() const
{
    return (count == 0);
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
bool queueType<Type>::isFull() const
{
    return (count == maxQueueSize);
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
void queueType<Type>::initializeQueue()
{
    queueFront = 0;
    queueRear = maxQueueSize - 1;
    count = 0;
    list = new Type[maxQueueSize];
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
Type queueType<Type>::front() const
{
    assert(!isEmpty());
    return list[queueFront];
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
Type queueType<Type>::back() const
{
    assert(!isEmpty());
    return list[queueRear];
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
void queueType<Type>::enqueue(const Type& newElement)
{
    if (!isFull())
    {
        queueRear = (queueRear + 1) % maxQueueSize; //use mod
                            //operator to advance queueRear  
                            //because the array is circular
        count++;
        list[queueRear] = newElement;
    }
    else
        cout << "Cannot add to a full queue." << endl;
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
void queueType<Type>::dequeue()
{
    if (!isEmpty())
    {
        count--;
        queueFront = (queueFront + 1) % maxQueueSize;
    }
    else
        cout << "Cannot remove from an empty queue." << endl;
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
int queueType<Type>::size()
{
    return count;
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
void queueType<Type>::print()
{
    cout << "Queue Elements: ";

    for (int i = queueFront; i < queueRear + 1; i++)
    {
        cout << " " << list[i];

    }
    cout << endl;
}
// ====================================================================================
// 
// ====================================================================================
//Constructor
template <class Type>
queueType<Type>::queueType(int queueSize)
{
    if (queueSize <= 0)
    {
        cout << "Size of the array to hold the queue must "
            << "be positive." << endl;
        cout << "Creating an array of size 100." << endl;

        maxQueueSize = 100;
    }
    else
        maxQueueSize = queueSize;   //set maxQueueSize to 
                                    //queueSize

    queueFront = 0;                 //initialize queueFront
    queueRear = maxQueueSize - 1;   //initialize queueRear
    count = 0;
    list = new Type[maxQueueSize];  //create the array to
                                    //hold the queue elements
}
// ====================================================================================
// 
// ====================================================================================
    //Destructor
template <class Type>
queueType<Type>::~queueType()
{
    delete[] list;
}
// ====================================================================================
// 
// ====================================================================================
template <class Type>
const queueType<Type>& queueType<Type>::operator=
(const queueType<Type>& otherQueue)
{
    cout << "The assignment operator is called." << endl;
    Type* new_list = new Type[otherQueue.maxQueueSize];
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
// ====================================================================================
// 
// ====================================================================================
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

#endif
