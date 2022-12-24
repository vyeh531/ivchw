#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
	// queue[ticket office] - 1  2  3  4  5   - FIFO data structure
	// deque - double-ended queue
	deque<int> numbers{ 1,2,3,4,5 };
	
	// for (int i = 0; i < numbers.size() ; i++)

	
	for (deque<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}
	

	/*
	vector<int> values{ 1,2,3,4,44 };

	for (int i = 0; i < numbers.size(); i++)
	{
		cout << values[i] << endl;
	}
	*/


	/*
	cout << "Size:  " << numbers.size() << endl
		<< "Front value:  " << numbers.front() << endl
		<< "Back value:  " << numbers.back() << endl << endl;
	numbers.resize(3);
	cout << "Size:  " << numbers.size() << endl
		<< "Front value:  " << numbers.front() << endl
		<< "Back value:  " << numbers.back() << endl << endl;
	numbers.pop_back();
	cout << "Back value:  " << numbers.back() << endl << endl;

	numbers.push_back(7);
	cout << "Here are the values:\n";

	numbers.push_front(9);

	int frontValue;

	frontValue = numbers.front();
	cout << "Front value:  " << frontValue;

	numbers.pop_front();
	*/


	/*
	// iterator

	int numbers[5] = { 1,2,3,4,5 };
	int* ptr = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *ptr << endl;
		ptr++;
	}
	*/


	/*
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}
	*/

	/*
	vector<int> numbers{ 1,2,3,4,5 };

	cout << "Size:  " << numbers.size() << endl
		<< "Capacity:  " << numbers.capacity() << endl
		<< "Front value:  " << numbers.front() << endl
		<< "Back value:  " << numbers.back() << endl << endl;
	numbers.resize(3);
	cout << "Size:  " << numbers.size() << endl
		<< "Capacity:  " << numbers.capacity() << endl
		<< "Front value:  " << numbers.front() << endl
		<< "Back value:  " << numbers.back() << endl << endl;
	numbers.pop_back();
	cout << "Back value:  " << numbers.back() << endl << endl;

	numbers.push_back(7);
	cout << "Here are the values:\n";
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}
	*/


	return 0;
}