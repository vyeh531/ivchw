/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #12: Templates (Queues) 
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 04/15/2021
*********************************************************/
#ifndef classTemplate_H
#define classTemplate_H

template <class Type>
class classTemplate
{
public:
    // ==== isEmptyQueue ==============================================================
    // Test and determine whether the queue is empty
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      ture - the queue is empty
    //      false - the queue is not empty
    //=================================================================================
    virtual bool isEmpty() const = 0;
    // ==== isFull() ==================================================================
    // Test and determine whether the queue is full
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      ture - the queue is full
    //      false - the queue is not full
    //=================================================================================
    virtual bool isFull() const = 0;
    // ==== initialize() ==============================================================
    // Initialize the queue to an empty queue
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      An empty queue
    //=================================================================================
    virtual void initializeQueue() = 0;
    // ==== front() ===================================================================
    // Return the first element of the queue
    //
    // PRE-CONDITIONS
    //      A not empty queue
    // POST-CONDITIONS
    //      The first element of the queue if the queue is not empty
    //=================================================================================
    virtual Type front() const = 0;
    // ==== back() ====================================================================
    // Return the last element of the queue
    //
    // PRE-CONDITIONS
    //      A not empty queue
    // POST-CONDITIONS
    //      The last element of the queue if the queue is not empty
    //=================================================================================
    virtual Type back() const = 0;
    // ==== enqueue() ================================================================
    // Add an queueElement to the queue
    //
    // PRE-CONDITIONS
    //      A not full queue
    // POST-CONDITIONS
    //      The queueElement is added to the queue
    //=================================================================================
    virtual void enqueue(const Type& queueElement) = 0;
    // ==== dequeue() ================================================================
    // Delete the first element of the queue
    //
    // PRE-CONDITIONS
    //      A not empty queue
    // POST-CONDITIONS
    //      The first element is removed from the queue
    //=================================================================================
    virtual void dequeue() = 0;
    // ==== size() ====================================================================
    // Return the number of elements stored 
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      The number of elements stored in an queue
    //=================================================================================
    virtual int size() = 0;
    // ==== print() ===================================================================
    // Print all the elements stored in the queue
    //
    // PRE-CONDITIONS
    //      none
    // POST-CONDITIONS
    //      The elements stored in an queue
    //=================================================================================
    virtual void print() = 0;
};


#endif