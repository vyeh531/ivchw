#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int returnlongestSub(string str, int k);
int main()
{
	string s1 = "eceba";	// the string for the first example
	string s2 = "aa";		// the string for the second example
	int k1 = 2;				// the k value for the first example
	int k2 = 1;				// the k value for the second example
	
	cout << "The answer for the first example is " << returnlongestSub(s1, k1) << "." << endl;

	cout << "The answer for the second example is " << returnlongestSub(s2, k2) << "." << endl;

	return 0;
}
//==============================================
//
//===============================================
int returnlongestSub(string str, int k)
{
	unordered_map<char, int> map;
	int result = 0;			// the lengh of the logest substring contains at most k distinct char
	int left = 0;			// the left side of the window
		
	for (int i = 0; i < str.size(); i++)
	{
		++map[str[i]];
		while (map.size() > k)
		{
			if (--map[str[left]] == 0)
			{
				map.erase(str[left]); //
				left++;			// increments the left side of the window - shrink the window
			}
		}
		result = max(result, i - left + 1);		// find out the maximun result
	}
	return result;
}