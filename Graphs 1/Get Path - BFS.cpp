#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> getPathBFS(vector<vector<bool>> &edges, vector<bool> &visited,
                       int start, int end)
{
    if (start == end)
    {
        return {start};
    }
    queue<int> q;
    vector<int> parent(edges.size());
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (int i = 0; i < edges.size(); i++)
        {
            if (edges[front][i] and !visited[i])
            {
                q.push(i);
                visited[i] = true;
                parent[i] = front;
            }
        }
    }

    // Now if the end node is found in BFS Traversal it will have been visited
    if (visited[end])
    {
        vector<int> path;
        path.push_back(end);
        int temp = end;
        while (parent[temp] != start)
        {
            path.push_back(parent[temp]);
            temp = parent[temp];
        }
        path.push_back(start);
        return path;
    }
    else
    {
        return {};
    }
}

int main()
{
    // Write your code here
    int v, e;
    cin >> v >> e;

    vector<vector<bool>> edges(v, vector<bool>(v, false));

    for (int i = 0; i < e; i++)
    {
        int first;
        int second;
        cin >> first >> second;
        edges[first][second] = true;
        edges[second][first] = true;
    }

    int start, end;
    cin >> start >> end;

    vector<bool> visited(v, false);
    vector<int> path = getPathBFS(edges, visited, start, end);

    for (auto it : path)
    {
        cout << it << " ";
    }

    return 0;
}