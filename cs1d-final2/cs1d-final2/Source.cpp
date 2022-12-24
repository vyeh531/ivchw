/*********************************************************
* AUTHOR		: Vivian Yeh
* CLASS			: CS1D
* SECTION		: TTh 5:00pm ¡V 7:20pm
*********************************************************/

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <climits>

using namespace std;

vector<long long> dist;
unordered_map<long long, unordered_map<long long, long long>> bestEdge;  // adj list that gives the min edge weight between any 2 nodes.
vector<vector<long long>> par;                   // All of the parents of an edge which are used in the shortest path
vector<vector<pair<long long, long long>>> adj;       // Adjacency list (completed)
long long point, t;                             // #points, #trails
vector<long long> visited;                  // Used to track which nodes are fully processed

long long getAllShortestPathWeights() {
    visited.clear();
    visited.resize(point, 0);
    long long totalCost = 0;
    queue<long long> q;
    q.push(point - 1);                // Start from the back and sum the weight of all used edges.
    while (!q.empty()) {
        long long curr = q.front(); q.pop();
        if (visited[curr]) continue;
        visited[curr] = true;
        for (auto i : par[curr]) {
            totalCost += bestEdge[curr][i];
            q.push(i);
        }
    }
    return totalCost;
}

void djikstra() {
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>> > pq;
    pq.push({ 0, 0 });

    while (!pq.empty()) {
        long long curr = pq.top().second; pq.pop();
        if (visited[curr]) continue;
        visited[curr] = true;

        for (auto e : adj[curr]) {
            long long wt = e.first;
            long long next = e.second;
            if (dist[curr] + wt < dist[next]) {
                dist[next] = dist[curr] + wt;
                par[next].clear();
                par[next].push_back(curr);
                pq.push({ dist[next], next });
            }
            else if (dist[curr] + wt == dist[next]) {
                par[next].push_back(curr);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> point >> t;
    dist.resize(point, INT_MAX);
    par.resize(point);
    adj.resize(point);
    visited.resize(point, false);
    dist[0] = 0;
    long long a, b, wt;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> wt;
        if (a == b) continue;
        adj[a].push_back({ wt, b });
        adj[b].push_back({ wt, a });
        if (bestEdge.count(a) == 0 || bestEdge[a].count(b) == 0) {
            bestEdge[a][b] = wt;
            bestEdge[b][a] = wt;
        }
        else {
            bestEdge[a][b] = min(bestEdge[a][b], wt);
            bestEdge[b][a] = min(bestEdge[b][a], wt);
        }
    }
    djikstra();
    cout << 2 * getAllShortestPathWeights() << endl;
}
