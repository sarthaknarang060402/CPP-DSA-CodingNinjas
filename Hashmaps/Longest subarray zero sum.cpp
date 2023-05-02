#include <unordered_map>
int lengthOfLongestSubsetWithZeroSum(int *arr, int n)
{
    // Write your code here
    unordered_map<int, int> prefixSum;

    int maxLength = 0;
    int runningSum = 0;
    for (int i = 0; i < n; i++)
    {
        runningSum += arr[i];

        // Corner cases
        if (arr[i] == 0 and maxLength == 0)
        {
            maxLength = 1;
        }
        if (runningSum ==
            0)
        { // if Sum upto index i is 0 then whatever is the length will be
          // samller than i + 1, hence length is updated
            maxLength = i + 1;
        }

        if (prefixSum.find(runningSum) != prefixSum.end())
        {
            maxLength = max(maxLength, i - prefixSum[runningSum]);
        }
        else
        {
            prefixSum[runningSum] = i;
        }
    }

    return maxLength;
}