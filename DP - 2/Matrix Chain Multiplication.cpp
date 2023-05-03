#include <climits>
#include <vector>

int helper(vector<vector<int>> &dp, int *arr, int start, int end)
{
    if (end - start == 1)
        return 0;

    if (dp[start][end])
        return dp[start][end];

    int ans = INT_MAX;
    for (int k = start + 1; k < end; k++)
    {
        int temp = helper(dp, arr, start, k) + helper(dp, arr, k, end) +
                   arr[start] * arr[k] * arr[end];
        ans = min(ans, temp);
    }
    dp[start][end] = ans;
    return ans;
}

int matrixChainMultiplication(int *arr, int n)
{
    // Write your code here
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    return helper(dp, arr, 0, n);
}