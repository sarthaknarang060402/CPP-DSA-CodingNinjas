#include <bits/stdc++.h>
void printIntersection(int arr1[], int arr2[], int n, int m)
{
    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++)
    {
        frequency[arr1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (frequency[arr2[i]])
        {
            cout << arr2[i] << endl;
            frequency[arr2[i]]--;
        }
    }
}
