#include <climits>
#include <vector>

int minCostPath(int **input, int m, int n)
{

    vector<vector<int>> dp(m, vector<int>(n, -1));

    dp[0][0] = input[0][0];

    for (int i = 0, j = 1; j < n; j++)
    {
        dp[i][j] = dp[i][j - 1] + input[i][j];
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int dp1 = INT_MAX;
            int dp2 = INT_MAX;
            int dp3 = INT_MAX;

            if (i >= 0 and j - 1 >= 0)
            {
                dp1 = dp[i][j - 1];
            }

            if (i - 1 >= 0 and j - 1 >= 0)
            {
                dp2 = dp[i - 1][j - 1];
            }

            if (i - 1 >= 0 and j >= 0)
            {
                dp3 = dp[i - 1][j];
            }

            dp[i][j] = input[i][j] + min(dp1, min(dp2, dp3));
        }
    }

    return dp[m - 1][n - 1];
}