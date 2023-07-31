#include<bits/stdc++.h>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) 
{
    unordered_map<int,int> myMap;
    int sum=0;
    myMap[0]=-1;
    int maxLength=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(myMap.count(sum))
        {
            if(maxLength<i-myMap[sum])maxLength=i-myMap[sum];
        }
        else
            myMap[sum]=i;
    }
    return maxLength;
}
