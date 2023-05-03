#include <bits/stdc++.h>

int solve(vector<int> &nums)
{
    vector<int> lis;

    for (auto it : nums)
    {
        auto it2 = lower_bound(lis.begin(), lis.end(), it);
        // upper_bound for longest non decreasing subsequence
        // lower_bound for longest increasing subsequence
        if (it2 == lis.end())
        {
            lis.push_back(it);
        }
        else
        {
            *it2 = it;
        }
    }
    return lis.size();
}

int longestIncreasingSubsequence(int *arr, int n)
{
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        nums[i] = arr[i];
    }

    return solve(nums);
}