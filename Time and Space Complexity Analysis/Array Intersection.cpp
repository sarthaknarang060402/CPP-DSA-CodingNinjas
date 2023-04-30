#include <bits/stdc++.h>
void intersection(int *a, int *b, int n, int m)
{
    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
            i++;
    }
}