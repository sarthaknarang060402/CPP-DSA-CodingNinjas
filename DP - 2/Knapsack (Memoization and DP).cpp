#include <vector>
int knapsack(int *weight, int *value, int n, int m)
{
    // Write your code here
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < m + 1; ++j)
        {
            if (weight[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] =
                    max(value[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
            }
        }
    }

    return dp[n][m];
}