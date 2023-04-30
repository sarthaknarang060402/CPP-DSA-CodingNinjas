#include <bits/stdc++.h>
void reverser(int *arr, int start, int end)
{
    for (; start < end;)
    {
        swap(arr[start++], arr[end--]);
    }
}

void rotate(int *input, int d, int n)
{
    reverser(input, 0, n - 1);
    reverser(input, 0, n - d - 1);
    reverser(input, n - d, n - 1);
}