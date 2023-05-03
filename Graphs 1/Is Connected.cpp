#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

bool isConnected(unordered_map<int, vector<int>> &graph, int v, int start)
{
    queue<int> q;
    vector<bool> visited(v, false);
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int i = 0; i < graph[front].size(); i++)
        {
            int curr = graph[front][i];
            if (!visited[curr])
            {
                q.push(curr);
                visited[curr] = true;
            }
        }
    }
    // If the graph is connected then the visted vector must be all true
    for (auto it : visited)
    {
        if (!it)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Write your code here
    int v, e;
    cin >> v >> e;

    // corner case
    // If no edge is present
    if (e == 0)
    {
        if (v == 0 or v == 1)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
        return 0;
    }

    unordered_map<int, vector<int>> graph;
    int first = -1;
    int second = -1;

    for (int i = 0; i < e; i++)
    {
        cin >> first >> second;
        graph[first].push_back(second);
        graph[second].push_back(first);
        // Instead of Adjacency matrix, using adjacency list to reduce complexity
    }

    if (isConnected(graph, v, first))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}