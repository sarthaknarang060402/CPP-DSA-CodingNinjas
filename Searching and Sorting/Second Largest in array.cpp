#include <bits/stdc++.h>
int findSecondLargest(int *arr, int n)
{
    int lar = INT_MIN;
    int slar = lar;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            slar = lar;
            lar = arr[i];
        }
        else if (arr[i] > slar && arr[i] != lar)
        {
            slar = arr[i];
        }
    }
    return slar;
}