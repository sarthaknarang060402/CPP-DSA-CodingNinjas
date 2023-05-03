#include <iostream>
#include <vector>
using namespace std;

bool getPathDFS(vector<vector<bool>> &edges, vector<bool> &visited,
                vector<int> &path, int start, int end)
{
    // base case
    if (start == end)
    {
        path.push_back(start);
        return true;
    }
    visited[start] = true;
    bool isTrue = false;

    for (int i = 0; i < edges.size(); i++)
    {
        if (edges[start][i] and !visited[i])
        {
            isTrue = getPathDFS(edges, visited, path, i, end);

            if (isTrue)
            {
                path.push_back(start);
                return true;
            }
        }
    }
    return false;
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
    vector<int> path;

    bool isTrue = getPathDFS(edges, visited, path, start, end);

    if (isTrue)
    {
        for (auto itr : path)
        {
            cout << itr << " ";
        }
    }

    return 0;
}
