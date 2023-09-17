#include<bits/stdc++.h>
// int solve(int i,int j,vector<int>&arr1,vector<vector<int>> &dp)
// {
//     if(i==j)return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     int mini = 1e9;
//     for(int k = i;k<j;k++)
//     {
//         int operations = arr1[i-1]*arr1[k]*arr1[j] + solve(i,k,arr1,dp) + solve(k+1,j,arr1,dp);
//         mini = min(mini,operations);
//     }
//     return dp[i][j]=mini;
// }

// int matrixChainMultiplication(int* arr, int n) {
//     n=n+1;
//     vector<int> arr1;
//     for(int i=0;i<n;i++)arr1.push_back(arr[i]);

//     vector<vector<int>> dp(n,vector<int>(n,-1));
//     return solve(1,n-1,arr1,dp);
// }

int matrixChainMultiplication(int *arr,int n)
{
    n++;
    int dp[n][n];
    for(int i=0;i<n;i++)dp[i][i]=0;

    for(int i=n-1;i>=1;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            int mini = 1e9;
            for(int k = i;k<j;k++)
            {
                int operations = arr[i-1]*arr[k]*arr[j] + dp[i][k] + dp[k+1][j];
                mini = min(mini,operations);
            }
            dp[i][j]=mini;
        }
    }
    return dp[1][n-1];
}
