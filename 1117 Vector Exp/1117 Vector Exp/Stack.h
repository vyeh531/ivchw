#include<iostream>
#include<vector>
using namespace std;

class FullStack {};

const int SIZE = 5;

template <class T>
class Stack
{
private:
	T stackItems[SIZE];
	int top;
public:
	//--------------------------------------------------------
	// Constructor initializes the new stack to be empty
	Stack()
	{
		top = -1;
	}
	//--------------------------------------------------------
	//	Destructor
	~Stack()

};