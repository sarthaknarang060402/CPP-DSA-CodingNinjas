#include<bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    unordered_map<int,bool> notTraversed;
    unordered_map<int,int> elementToIndex;
    for(int i=0;i<n;i++)notTraversed[arr[i]]=true;
    for(int i=0;i<n;i++)elementToIndex[arr[i]]=i;
    int maxLength=0;
    int start=arr[0];
    for(int i=0;i<n;i++)
    {
        int length=1;
        int current=arr[i];// 3
        if(notTraversed[current])
        {
            while(notTraversed.find(current+1)!=notTraversed.end()) //going right....  
            {
                length++; 
                current++;
                notTraversed[current]=false;
            }
            current=arr[i]; // index for going to left now
            while(notTraversed.find(current-1)!=notTraversed.end())//going left.... 
            {
                length++;
                current--;
                notTraversed[current]=false;
            }
        }
        notTraversed[arr[i]]=false;
        if( length>maxLength || ( length==maxLength && ( i==0 || elementToIndex[current]<=elementToIndex[start])))
        {
                start=current;
                maxLength=length;
        }
    }
    vector<int> ans;
    ans.push_back(start);
    if(maxLength>1)
    ans.push_back(start+maxLength-1);
    return ans;
}
