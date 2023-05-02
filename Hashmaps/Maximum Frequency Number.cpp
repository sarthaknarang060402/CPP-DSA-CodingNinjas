#include <bits/stdc++.h>
int highestFrequency(int arr[], int n)
{
    unordered_map<int, int> frequency;
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    int value = 0;
    int key = 0;
    for (int i = 0; i < n; i++)
    {
        if (frequency[arr[i]] > value)
        {
            key = arr[i];
            value = frequency[arr[i]];
        }
    }
    return key;
}