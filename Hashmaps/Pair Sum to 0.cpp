#include <bits/stdc++.h>
using namespace std;
int pairSum(int *arr, int n)
{
    unordered_map<int, int> map;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (map.count(-arr[i]))
        {
            count += map[-arr[i]];
        }
        map[arr[i]]++;
    }
    return count;
}