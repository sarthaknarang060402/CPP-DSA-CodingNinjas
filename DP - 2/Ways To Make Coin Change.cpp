#include <algorithm>
#include <vector>

int countWaysToMakeChange(int coins[], int n, int value)
{
    // Write your code here
    vector<vector<long long>> dp(n + 1, vector<long long>(value + 1, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < value + 1; ++j)
        {
            // base cases
            if (coins[i] == 1)
            {
                dp[i + 1][j] = 1;
                continue;
            }
            if (j == 0)
            {
                dp[i + 1][j] = 1;
                continue;
            }

            if (coins[i] > j)
            {
                dp[i + 1][j] = dp[i][j];
            }
            else
            {
                dp[i + 1][j] = dp[i][j] + dp[i + 1][j - coins[i]];
                // if We include the coin[i] + if we don't include it
            }
        }
    }

    return dp[n][value];
}