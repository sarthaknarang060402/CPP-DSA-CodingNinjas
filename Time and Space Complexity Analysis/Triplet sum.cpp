#include <bits/stdc++.h>
int tripletSum(int *A, int arr_size, int sum)
{
    int l, r;

    sort(A, A + arr_size);
    int count = 0;
    for (int i = 0; i < arr_size - 2; i++)
    {

        // fix i
        l = i + 1;

        r = arr_size - 1;

        while (l < r)
        {
            if (A[i] + A[l] + A[r] == sum)
            {
                count++;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
    return count;
}