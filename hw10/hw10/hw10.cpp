// hw10.cpp
// to illustrate copy & move constructors, assignment operators

/*************************************************************************
 * AUTHOR        : Vivian Yeh
 * Assignment #10: Copy & move constructors, assignment operators
 * CLASS         : CS 1C
 * SECTION		 : TTh 12:30pm ¡V 01:45pm
 * Due Date	  	 : 03/30/2021
*************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

// file hw10.h

namespace hw10 {

//--Q#1,2,3,4-------------------------------------------------------------------

// a basic implementation of our stl like vector class
// basic vector is a fixed size array of doubles

class vector {
    int vsize;
    double* elem;
    void copy(const vector& source);              // copy elements from source into *elem
public:
    vector(int s) : vsize{s}, elem{new double[s]} {} // constructor
    
    vector(const vector&);                        // copy constructor: defines the copy operation
    vector(vector&&)noexcept;                     // move constructor: defines the move operation
    ~vector() { delete[] elem; }                  // destructor

    int size() const { return vsize; }            // the current size

    double get(int n) { return elem[n]; }         // access: read
    void set(int n, double v) { elem[n]=v; }      // access: write

    vector& operator=(const vector&);             // copy assignment
    vector& operator=(vector&&)noexcept;          // move assignment
};

//------------------------------------------------------------------------------

} // hw10

//------------------------------------------------------------------------------

// class member function, function definitions go into hw10.cpp:

// hw10.cpp

namespace hw10 {

// member function definitions:

//------------------------------------------------------------------------------

void vector::copy(const vector& source)
    // copy elements 0 to original.vsize-1
{
    for (int i = 0; i < source.vsize; ++i)
    {
        elem[i] = source.elem[i];
    }
}

//--Q#1-------------------------------------------------------------------------

vector::vector(const vector& source) // copy constructor
    // allocate elements, then initialize them via copy operation
    // : ...
{
    // ... // use class defined copy operation
    vsize = source.vsize;
    elem = new double[vsize];
    copy(source);
}

//--Q#3-------------------------------------------------------------------------

vector::vector(vector&& source)noexcept // move constructor
// copy source elem and vsize only, no need for copy operation
// : ...
    : vsize{source.vsize}, elem{source.elem}
{
    // ... // now that source vector contents have been moved, empty the vector
    // ...
    source.elem = nullptr;
    source.vsize = 0;
}

//--Q#2-------------------------------------------------------------------------

vector& vector::operator=(const vector& rhs) // copy assignment
    // make this vector a copy of the rhs (i.e. source)
{
    double* pD = new double[rhs.vsize];  // allocate new space for double[]
    std::copy(rhs.elem, rhs.elem + rhs.vsize, pD);  // use std::copy algorithm to copy rhs elements into pD double[]
    delete elem;    // deallocate old space
    elem = new double[rhs.vsize];
    copy(rhs);  // now that we've copied new, deallocated old elems, reset elem pointer
    vsize = rhs.vsize;  // reset vector size
    return *this;   // return a self-reference
}

//--Q#4-------------------------------------------------------------------------

vector& vector::operator=(vector&& rhs) noexcept// move assignment
    // move rhs (i.e. source) to this vector
{
    delete[] elem;        // deallocate old space
    elem = rhs.elem;      // copy rhs¡¦s elements and size, move implies copying element pointer only
    vsize = rhs.vsize;
    rhs.elem = nullptr;   // empty the rhs vector
    rhs.vsize = 0;

    cout << "move assignment invoked" << endl;

    return *this;         // return a self-reference
}

//------------------------------------------------------------------------------

// function definitions:

//--Q#5-------------------------------------------------------------------------

vector fill_doubles(istream& is, int size)
{
	vector temp{size};          // instantiate temp vector
	for (int i = 0; i < size; i++)
    {
        double x;
        is >> x;                // store double from input stream in vector
        temp.set(i,x);
    }
	return temp;                // return temp by value, move constructor invoked
}

//------------------------------------------------------------------------------

ostream& print(ostream& os, vector& v)
    // print vector element values to the output stream
{
    for (int i = 0; i < v.size(); ++i) 
        os << v.get(i) << " ";
	return os;
}

//------------------------------------------------------------------------------

} // hw10

//------------------------------------------------------------------------------

using namespace hw10;

int main()
{
    // console header
	cout << endl;
	cout << "************************************** " << endl;
	cout << "*           Running HW10             * " << endl;
	cout << "*      Programmed by Vivian Yeh      * " << endl;
	cout << "*      CS1C TTh 12:30pm ¡V 01:45pm    * " << endl;
	cout << "************************************** " << endl;
	cout << endl;

	// Q#1,2 - vector copy constructor and assignment operatior

    vector v{3};        // define a vector
    v.set(1,100.5);     // set v[1] to 100.5

    vector v2 = v;      // [1.1] copy v to v2: what happens here?
    v2.set(0,25);       // set v2[0] to 25
    
    cout << "v  double values: ";
    print(cout,v);
    cout << endl;
    cout << "v2 double values (after copy, set): ";
    print(cout,v2);
    cout << endl << endl;

    vector v3{3};
    vector v4{4};
    v3.set(2,3.3);
    v4.set(2,4.4);

    cout << "v3 double values: ";
    print(cout,v3);
    cout << endl;
    cout << "v4 double values: ";
    print(cout,v4);
    cout << endl;

    v3 = v4;            // [2.1] assign v4 to v3: what happens here?
    
    cout << "v3 double values (after assignment): ";
    print(cout,v3);
    cout << endl << endl;

    vector v5{10};
    v5 = v5;            // [2.2] self assignment: what happens here, any problems? (answer below the main)

	// Q#5 - move assignment

    cout << "fill up v6 with five doubles" << endl;
    vector v6 = fill_doubles(cin,5); // temp vector in function scope moved to v6
    cout << "v6 double values: ";
    print(cout,v6);
    cout << endl;

    return 0;
}
//------------------------------------------------------------------------------

// WRITTEN ANSWERS
/*
1.1 - It calls the copy constructor
2.1 - It calls the assignment operator
2.2 - Technically, it will work, but Self-assignment will cause a problem. 
        If it deletes the origin member which means that it deletes the
        right hand side's member, and so we will get a invalid pointer.

5. - A move constructor like a copy constructor. They both creates a 
        new instance based on the original object. But, the move constructor
        can avoid memory reallocation because it provides a temporary object.
        Therefore, we tend to use move constructor rather than copy constructor.
     A move constructor is invoked when the temp vector (in function scope) is 
        returned (by value) from the fill_doubles function and assigned to v6 in main
        This results in a temporary object to avoid memory reallocation.
*/