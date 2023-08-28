#include<bits/stdc++.h>

int countWaysToMakeChange(int denominations[],int n,int value)
{
	vector<vector<int>> dp(n,vector<int>(value+1,0));
	for(int i =0;i<=value;i++)
	{
		if(i%denominations[0]==0)dp[0][i]=1;
	}

	for(int i = 1;i<n;i++)
	{
		for(int j=0;j<=value;j++)
		{
			int nottake = dp[i-1][j];
			int take = 0;
			if(j - denominations[i]>=0)take = dp[i][j - denominations[i]];
			dp[i][j]=take + nottake;
		}
	}
	return dp[n-1][value];
}



// int solve(int denominations[], int n,int idx, int value,vector<vector<int>> &dp)
// {
// 	if(idx ==0)
// 	{
// 		if(value%denominations[0]==0)return 1;
// 	}
// 	if(dp[idx][value]!=-1)return dp[idx][value];
// 	int nottake = solve(denominations,n,idx-1,value,dp);
// 	int take = 0;
// 	if(value - denominations[idx]>=0)take = solve(denominations,n,idx,value-denominations[idx],dp);
// 	return dp[idx][value]=take + nottake;
// }
// int countWaysToMakeChange(int denominations[], int n, int value)
// {
// 	vector<vector<int>> dp(n,vector<int>(value+1,-1));
// 	return solve(denominations,n,n-1,value,dp);
// }
