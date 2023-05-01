#include <bits/stdc++.h>
int maximumProfit(int budget[], int n)
{
    sort(budget, budget + n);
    int profits[n];
    for (int i = 0; i < n; i++)
    {
        profits[i] = budget[i] * (n - i);
    }
    sort(profits, profits + n);
    return profits[n - 1];
}
