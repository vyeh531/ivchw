// hw15.cpp
// to illustrate stl containers & iterators

/*************************************************************************
 * AUTHOR     : Vivian Yeh
 * HW15       : stl containers & iterators
 * CLASS      : CS 1C
 * SECTION    : TTh 12:30pm - 01:45pm
 * Due Date	  : 05/11/2021
*************************************************************************/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

// function & class definitions go into hw15.cpp:

// hw15.cpp

namespace hw15 {

    //
    // list conainter, iterator example code adapted from Chapter 20.4
    // "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
    //

    //------------------------------------------------------------------------------

    template<typename Elem>
    struct Link
    {
        Link* prev;    // previous link
        Link* succ;    // successor (next) link
        Elem  val;     // the value
        Link(const Elem& v = Elem(), Link* p = 0, Link* s = 0) : val{ v }, prev{ p }, succ{ s } { }
    };

    //--Q#3-------------------------------------------------------------------------

    template<typename Elem>
    class list
    {
        // representation and implementation details
    public:
        class iterator;         // forward declaration of member type: class iterator
        class const_iterator;   // forward declaration of member type: class const_iterator

        list() : first(new Link<Elem>()), last{ first } { }
        ~list()
        {
            while (first != last)
            {
                Link<Elem>* next = first->succ;
                delete first;
                first = next;
            }
            delete last;
        }

        iterator begin();   // iterator to first element
        iterator end();     // iterator to one beyond last element

        // add missing const iterators begin, end here

        const_iterator cbegin() const noexcept; // constant iterator to first element
        const_iterator cend() const noexcept; // constant iterator to one beyond last element

        iterator insert(iterator p, const Elem& v); // insert v into list after p
        iterator erase(iterator p);                 // remove p from the list

        void push_back(const Elem& v);  // insert v at end
        void push_front(const Elem& v); // insert v at front
        void pop_front();   // remove the first element
        void pop_back();    // remove the last element

        Elem& front();      // the first element
        Elem& back();       // the last element

        Link<Elem>* first;
        Link<Elem>* last;   // one-beyond-the-last link
    };

    //--Q#4-------------------------------------------------------------------------

    template<typename Elem>
    class list<Elem>::iterator // definition for class iterator
    {
        Link<Elem>* curr;   // current node
    public:
        iterator(Link<Elem>* p) : curr{ p } { }
        iterator& operator++() // forward
        {
            curr = curr->succ;
            return *this;
                            // temp, replace when defining function
            //return nullptr; // included so that incomplete lab code will compile
        }
        iterator& operator--() // backwards
        {
            curr = curr->prev;
                            // temp, replace when defining function
            return nullptr; // included so that incomplete lab code will compile
        }
        Elem& operator*() // get value (dereference)
        {
            return curr->val;
                            // temp, replace when defining function
            //return nullptr; // included so that incomplete lab code will compile
        }

        bool operator==(const iterator& rhs) const // lhs, rhs iterators point to the same node (equal)
        {
            return this->curr == rhs.curr;
                          // temp, replace when defining function
            //return false; // included so that incomplete lab code will compile
        }
        bool operator!=(const iterator& rhs) const // lhs, rhs iterators do not point to the same node (not equal)
        {
            return this->curr != rhs.curr;
                          // temp, replace when defining function
            //return false; // included so that incomplete lab code will compile
        }
    };

    //--Q#4-------------------------------------------------------------------------

    template<typename Elem>
    class list<Elem>::const_iterator // definition for class const_iterator
    {
        const Link<Elem>* curr;   // current node
                                  // node pointed to by curr is immutable (i.e. can't be changed)
                                  // fine to modify curr pointer itself (i.e. pointer value stored in curr)
                                  // refer to const correctness reading
    public:

        // add missing constructor, overloaded ++, --, *, ==, != operators here

        // ...
    };

    //------------------------------------------------------------------------------

    template<typename Elem>
    typename list<Elem>::iterator list<Elem>::begin()  // iterator to first element
    {
        return iterator(first);
    }

    //--Q#3-------------------------------------------------------------------------

    // constant iterator to first element
    // ... add missing constant iterator begin here

    template<typename Elem>
    typename list<Elem>::const_iterator list<Elem>::cbegin() const noexcept // constant iterator to first element
    {
        return const_iterator(first);
    }

    //------------------------------------------------------------------------------

    template<typename Elem>
    typename list<Elem>::iterator list<Elem>::end() // iterator to one beyond last element
    {
        return iterator(last);
    }

    //--Q#3-------------------------------------------------------------------------

    // constant iterator to last element
    // ... add missing constant iterator end here

    template<typename Elem>
    typename list<Elem>::const_iterator list<Elem>::cend() const noexcept // constant iterator to one beyond last element
    {
        return const_iterator(last);
    }

    //------------------------------------------------------------------------------

    template<typename Elem>
    void list<Elem>::push_front(const Elem& v) // insert v at front
    {
        first = new Link<Elem>(v, 0, first);
    }

    //------------------------------------------------------------------------------

    template<typename Elem>
    typename list<Elem>::iterator list<Elem>::insert(iterator p, const Elem& v) // insert v into list after p
    {
        list<int> list;
        list.insert(p, v);
    }
    //------------------------------------------------------------------------------
    template<typename Elem>
    typename list<Elem>::iterator list<Elem>::erase(iterator p)   // remove p from the list
    {
        list<int> list;
        p = list.erase(p);
    }
    //------------------------------------------------------------------------------
    template<typename Elem>
    void list<Elem>::push_back(const Elem& v)  // insert v at end
    {
        last = new Link<Elem>(v, 0, last);
    }
    //------------------------------------------------------------------------------
    template<typename Elem>
    void list<Elem>::pop_front()   // remove the first element
    {
        list<int> list;
        list.pop_front();
    }
    //------------------------------------------------------------------------------
    template<typename Elem>
    void list<Elem>::pop_back()   // remove the last element
    {
        list<int> list;
        list.pop_back();
    }
    //------------------------------------------------------------------------------
    template<typename Elem>
    typename list<Elem>::Elem& front()      // the first element
    {
        list<int> list;
        list.front() -= list.back();
    }
    //------------------------------------------------------------------------------
    template<typename Elem>
    typename list<Elem>::Elem& back()       // the last element
    {
        list<int> list;
        while (list.back() != 0)
        {
            list.push_back(list.back() - 1);
        }
    }

    //
    // low algorithms adapted from Chapter 20.1, 20.4
    // "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
    //

    //--Q#5-------------------------------------------------------------------------

    double* low_doubles(double* first, double* last)
      // return a pointer to the element in [first,last) that has the lowest value
    {
        double l = -1;
        double* low = first;    
        for (double* p = first; p != last; ++p)        
            if (*p < l) 
            { 
                low = p; 
                l = *p; 
            }    
        return low;
    }

    //--Q#5-------------------------------------------------------------------------

    template<typename Iterator>
    Iterator low(Iterator first, Iterator last)
    {
        Iterator low = first;
        for (Iterator p = first; p != last; ++p)
            if (*p < *low)
                low = p;
        return low;
    }

//------------------------------------------------------------------------------

} // hw15

//------------------------------------------------------------------------------

using namespace hw15;

//
// list conainter, iterator example code adapted from Chapter 20.4
// low algorithms adapted from Chapter 20.1, 20.4
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

int main()
{
    // console header
    cout << endl;
    cout << "************************************** " << endl;
    cout << "*           Running HW15             * " << endl;
    cout << "*      Programmed by Vivian Yeh      * " << endl;
    cout << "*      CS1C TTh 12:30pm - 01:45pm    * " << endl;
    cout << "************************************** " << endl;
    cout << endl;

    // Q#3,4 - containters & iterators

    list<int> myList;
    int x;
    // Q#5 - low_doubles algorithm

    double d[] = { 1,2,3,4,5,-99.25,100,10,500.123,5 };       // init array of doubles
    vector<double> v = { 1,2,3,4,5,-99.25,100,10,500.123,5 }; // init identical vector of doubles
    double* lowa = low_doubles(&d[0], &d[9]); // min of array
    cout << endl << "low_doubles alg: double array min value is " << *lowa << endl << endl;

    double* middle = &v[0] + v.size() / 2;
    double* lowv1 = low_doubles(&v[0], middle);          // min of vector first half
    double* lowv2 = low_doubles(middle, &v[0] + v.size()); // min of vector second half
    cout << "low_doubles alg: double vector min value first half is " << *lowv1 << endl;
    cout << "low_doubles alg: double vector min value second half is " << *lowv2 << endl << endl;

    // Q#5 - low algorithm

    // NOTE: uncomment code below once low algorithm definition is complete

    lowa = low(&d[0], &d[9]); // min of array
    cout << "low alg: double array min value is " << *lowa << endl << endl;

    lowv1 = low(&v[0], middle);          // min of vector first half
    lowv2 = low(middle, &v[0]+v.size()); // min of vector second half
    cout << "low alg: double vector min value first half is " << *lowv1 << endl;
    cout << "low alg: double vector min value second half is " << *lowv2 << endl << endl;

    list<int>::iterator p = low(myList.begin(), myList.end()); // min of list
    if (p==myList.end())    // did we reach the end?
        cout << "low alg: the list is empty";
    else
        cout << "low alg: the lowest value in the list is " << *p << endl;


    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// Q#1 What is an stl container ? stl iterator ? stl algorithm ? Give examples of
//      each.
/*
There are sequence containers and associative containers in the STL container.
"The containers are objects that store data" such as vector, deque, and list, 
set, map, and so on.
An iterator is an object (like a pointer) that points to an element inside the 
container such as begin(), end(), random(), next(), and so on.
We can use iterators to move through the contents of the container.
An algorithm is a collection of functions especially designed to be used on 
ranges of elements.They act on containers and provide means for various operations
for the contents of the containers; for example, sorting and searching.
*/

// Q#2 Explain how the iterator architecture makes it possible to decouple 
//      algorithms from containers.Why is this important ?
/*
Iterators decouple algorithms from containers¡VAlgorithms require specific iterator 
interfaces¡VContainers provide iterators that give specific interfaces¡VAllows 
safe combinations, disallows unsafe/inefficient ones. Functors decouple algorithms 
from their sub-steps. It is important because we can avoid the typical combinatorial 
explosion of adding algorithm versions for each new container type.
*/

// Q#5
// Since the low and low_doubles are the algorithms we wrote that means the iterator
// may got lost with the low() which iterator already has between the low() we created.
// The same name of the function will cause the iterator some errors
// I guess the algorithms low_doubles and low similar when they are both deal with the 
// same data type.

