#include<bits/stdc++.h>
void Klargest(int arr[],int output[],int n,int k){
    sort(arr,arr+n);
    int idx=0;
    for(int  i=n-k;idx<k;idx++,i++)
    {
        output[idx]=arr[i];
    }
}
