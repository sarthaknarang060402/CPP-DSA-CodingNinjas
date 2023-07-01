void arrange(int *arr, int n)
{
    // Write your code here
    int val = 1;
    int idx=0;
    for(int i=1;i<=n;i+=2)
    {
        arr[idx++]=i;
    }
    if(n%2!=0)n--;
    for(int j=n;j>=2;j-=2)
    {
        arr[idx++]=j;
    }
}
