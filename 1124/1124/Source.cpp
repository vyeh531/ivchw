#include <iostream>
#include<string>
#include<list>
#include<vector>	// 3 STL squence container
#include<deque>

using namespace std;

int main()
{
	vector<int> values{ 1,2,3,4,5 };

	cout << "Capacity:  " << values.capacity() << endl
		<< "Size:  " << values.size() << endl << endl;

	values.push_back(6);
	values.push_back(7);

	cout << "Capacity:  " << values.capacity() << endl
		<< "Size:  " << values.size() << endl << endl;

	/*
	list<int> numbers;
	list<int> values{ 1,2,3,4,5 };
	list<int> amounts(3, 100);
	*/


	return 0;

}