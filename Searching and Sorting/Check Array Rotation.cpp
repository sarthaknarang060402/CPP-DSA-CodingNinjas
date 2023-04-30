#include <bits/stdc++.h>
int arrayRotateCheck(int *input, int n)
{
    int min = INT_MAX;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
            idx = i;
        }
    }
    return idx;
}