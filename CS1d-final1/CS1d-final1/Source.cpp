#include <iostream>
#include <fstream>
#include <climits>
#include <vector>
#include <queue>
using namespace std;

void getList(ifstream& input, vector<vector<pair<int, int>>>& adjacencyList, int edgeCount);
void getTestCases(ifstream& input, vector<int>& cases, int queryCount);
void printDist(ofstream& out, vector<int>& dist, vector<int>& cases);

int main()
{
	ifstream inFile;
	ofstream outFile;
	inFile.open("shortestpath1.in");
	outFile.open("shortestpath1.ans");

	bool endOfTestCase = false;

	while (!endOfTestCase && !inFile.eof())
	{
		int n;	// # of nodes
		int m;	// # of edges
		int q;	// # of queries
		int s;	// index of the starting node

		inFile >> n >> m >> q >> s;

		if (n == 0 && m == 0 && q == 0 && s == 0)
		{
			endOfTestCase = true;
		}
		else
		{
			vector<vector<pair<int, int>>> adjacencyList(n);
			vector<int> testCase;
			getList(inFile, adjacencyList, q);
			getTestCases(inFile, testCase, q);

			priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
			vector<int> distance(n, INT_MAX);
			pq.push({ 0, s });

			while (pq.size() > 0)
			{
				int currDist = pq.top().first;
				int currNode = pq.top().second;
				pq.pop();

				if (currDist <= distance[currDist])
				{
					distance[currNode] = currDist;
					for (int i = 0; i < adjacencyList[currNode].size(); i++)
					{
						if (currDist + adjacencyList[currNode][i].first < distance[adjacencyList[currNode][i].second])
						{
							pq.push({ currDist + adjacencyList[currNode][i].first, adjacencyList[currNode][i].second });
						}
					}
				}
			}
			printDist(outFile, distance, testCase);
		}
	}
	inFile.close();
	outFile.close();
	return 0;
}


void getList(ifstream &input, vector<vector<pair<int, int>>>& adjacencyList, int edgeCount)
{
	for (int i = 0; i < edgeCount; i++)
	{
		int startingNode, endingNode, weight;
		input >> startingNode >> endingNode >> weight;
		adjacencyList[startingNode].push_back({ weight, endingNode });
	}
}

void getTestCases(ifstream& input, vector<int>& cases, int queryCount)
{
	for (int i = 0; i < queryCount; i++)
	{
		int x;
		input >> x;
		cases.push_back(x);
	}
}

void printDist(ofstream& out, vector<int>& dist, vector<int>& cases)
{
	for (int i = 0; i < cases.size(); i++)
	{
		if (dist[cases[i]] == INT_MAX)
			out << "\nImpossible";
		else
			out << dist[cases[i]] << endl;
	}
}

/*
#include <iostream>
#include <fstream>
#include <climits>
#include <vector>
#include <queue>
using namespace std;

void getList(vector<vector<pair<int, int>>>& adjacencyList, int edgeCount);
void getTestCases(vector<int>& cases, int queryCount);
void printDist(vector<int>& dist, vector<int>& cases);

int main()
{
	int n;  // # of nodes
		int m;  // # of edges
		int q;  // # of queries
		int s;  // index of the starting node

	bool endOfTestCase = false;

	while (!endOfTestCase)
	{

		cin >> n >> m >> q >> s;

		if (n == 0 && m == 0 && q == 0 && s == 0)
		{
			endOfTestCase = true;
		}
		else
		{
			vector<vector<pair<int, int>>> adjacencyList(n);
			vector<int> testCase;
			getList(adjacencyList, q);
			getTestCases(testCase, q);

			priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
			vector<int> distance(n, INT_MAX);
			pq.push({ 0, s });

			while (pq.size() > 0)
			{
				int currDist = pq.top().first;
				int currNode = pq.top().second;
				pq.pop();

				if (currDist <= distance[currDist])
				{
					distance[currNode] = currDist;
					for (int i = 0; i < adjacencyList[currNode].size(); i++)
					{
						if (currDist + adjacencyList[currNode][i].first < distance[adjacencyList[currNode][i].second])
						{
							pq.push({ currDist + adjacencyList[currNode][i].first, adjacencyList[currNode][i].second });
						}
					}
				}
			}
			printDist(distance, testCase);
		}
	}
	return 0;
}


void getList(vector<vector<pair<int, int>>>& adjacencyList, int edgeCount)
{
	for (int i = 0; i < edgeCount; i++)
	{
		int startingNode, endingNode, weight;
		cin >> startingNode >> endingNode >> weight;
		adjacencyList[startingNode].push_back({ weight, endingNode });
	}
}

void getTestCases(vector<int>& cases, int queryCount)
{
	for (int i = 0; i < queryCount; i++)
	{
		int x;
		cin >> x;
		cases.push_back(x);
	}
}

void printDist(vector<int>& dist, vector<int>& cases)
{
	for (int i = 0; i < cases.size(); i++)
	{
		if (dist[cases[i]] == INT_MAX)
			cout << "Impossible\n";
		else
			cout << dist[cases[i]];
	}
	cout << endl;
}
*/