#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(),arr.end());
	for(int i=1;i<n;i++)
	{
		if(arr[i]==arr[i-1])return arr[i];
	}
}
