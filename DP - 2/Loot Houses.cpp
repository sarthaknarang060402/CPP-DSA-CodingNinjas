#include <vector>
int maxMoneyLooted(int *arr, int n)
{
    vector<int> dp(n + 1);
    dp[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i == 1)
        {
            dp[i] = arr[0];
        }
        else
        {
            dp[i] = max(arr[i - 1] + dp[i - 2], dp[i - 1]);
        }
    }

    return dp[n];
}
