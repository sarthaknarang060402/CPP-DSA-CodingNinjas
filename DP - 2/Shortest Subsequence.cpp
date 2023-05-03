#include <vector>
#include <string>
#include <climits>
int solve(string s, string v)
{
    // Write your code here
    int m = s.length();
    int n = v.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    // If length of "v" == 0
    // Shortest Subsequence in S will be of length 1
    for (int i = 0; i < m + 1; i++)
    {
        dp[i][0] = 1;
    }

    // Since it is given that answer to the problem always exists
    // So length of "s" cannot be zero
    for (int j = 0; j < n + 1; j++)
    {
        dp[0][j] = 1001;
    }

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            char current = s[i - 1];
            auto it = v.substr(0, j).rfind(current);

            if (it != ULONG_MAX)
            {
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][it] + 1);
            }
            else
            {
                dp[i][j] = 1;
            }
        }
    }

    return dp[m][n];
}