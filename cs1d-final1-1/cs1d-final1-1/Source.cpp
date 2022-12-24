#include <iostream>
#include <climits>
#include <vector>
#include <queue>
using namespace std;

void getList(vector<vector<pair<int, int>>>& adjacencyList, int edgeCount);
void getTestCases(vector<int>& cases, int queryCount);
void printDist(vector<int>& dist, vector<int>& cases);

int main()
{
	bool endOfTestCase = false;

	while (!endOfTestCase)
	{
		int n;	// # of nodes
		int m;	// # of edges
		int q;	// # of queries
		int s;	// index of the starting node

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
			cout << endl << dist[cases[i]];
	}
}