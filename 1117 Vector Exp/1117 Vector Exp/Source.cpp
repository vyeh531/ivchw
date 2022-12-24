#include<iostream>
#include <string>
#include <vector>
#include<deque>
#include<list>  // cannot use for loop
#include <algorithm>	// C++ STL algorithm functions
using namespace std;

int main()
{
	vector<int> numbers{ 1,2,3,4,5 };
	int num;

	num = numbers.back();
	numbers.pop_back();


	cout << num << endl << endl;
	cout << numbers.at() << endl << endl;







	/*
	vector<int> numbers{1,2,3,4,5};

	cout << "Size:  " << numbers.size() << endl
		<< "Capacity:  " << numbers.capacity() << endl;

	if (numbers.empty())
	{
		cout << "Empty.\n\n";
	}
	else
	{
		cout << "Not Empty.\n\n";
	}
	while (!numbers.empty())
	{
		numbers.pop_back();
	}
	cout << "Size:  " << numbers.size() << endl;
	*/

	/*
	numbers.resize(3);

	cout << "Size:  " << numbers.size() << endl
		<< "Capacity:  " << numbers.capacity() << endl;
	*/


	/*
	vector<int> numbers;

	cout << "Size:  " << numbers.size() << endl
		<< "Capacity:  " << numbers.capacity() << endl;

	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.push_back(8);
	numbers.push_back(9);

	cout << "Size:  " << numbers.size() << endl
		<< "Capacity:  " << numbers.capacity() << endl;

	numbers.pop_back();
	numbers.pop_back();

	cout << "Size:  " << numbers.size() << endl				// change
		<< "Capacity:  " << numbers.capacity() << endl;		// will not change after pop_back()

	numbers.shrink_to_fit();								// capacity shrink

	cout << "Size:  " << numbers.size() << endl
		<< "Capacity:  " << numbers.capacity() << endl;		
	*/

	/*
	Big O Notation - Express the worst case

	O(n)


	vector<int> items;
	int id = 999997;

	items[5] = 88;
	items[items.size()] = 22;
	


	n = 1000000			if (id == items[i])

	1	[0]
	2	[1]					 999997 == 999997
	3	[2]				 -   999997
	4	[3]						0
	5	[4]
	6	[5]
	55	[6]
	15	[7]
	18	[8]
	.
	.
	.
	.
	.
	33	[999000]
		[999001]
	nums.push_back(55);
	nums.push_back(15);



	push_back() is O(1)		(constant time)
	sequential search is O(n)



	999997
	1000000
	
	*/



	/*
	list<int> nums{ 2,4,6,8 }; // with #include<list>

	vector<int> nums{ 2,4,6,8 }; // with #include<vector> || <deque>

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}
	cout << "Size:  " << nums.size() << endl
		<< "Front:  " << nums.front() << endl
		<< "Back:  " << nums.back() << endl << endl;
	*/

	/*
	int num1 = 5;
	int num2 = 3;
	int temp = 0;

	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "num1:  " << num1 << endl << endl;
	*/
	
	
	/*
	int num1 = 5;
	int num2 = 3;
	float num3 = 5.5;
	float num4 = 7.7;
	string s1 = "aaaaaaab";	// 'A' = 65
	string s2 = "aaaaaaac";	// 'a' = 97
	int highest;

	highest = max(num1, num2);
	cout << highest << endl << endl;

	cout << "int:\n" << num1 << '\t' << num2 << endl; 
	swap(num1, num2);	
	cout << num1 << '\t' << num2 << endl << endl << endl;

	cout << "float:\n" << num3 << '\t' << num4 << endl;
	swap(num3, num4);
	cout << num3 << '\t' << num4 << endl << endl << endl;

	cout << "string:\n" << s1 << '\t' << s2 << endl;
	swap(s1, s2);
	cout << s1 << '\t' << s2 << endl << endl << endl;

	cout << "String highest:  " << max(s1, s2) << endl << endl;
	*/

	/*
	vector<int> nums(5, 0);

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[1] << endl;
	}
	*/

	return 0;
}
