int pairSum(int *arr, int start,int end, int num)
{
	int count = 0;
	for(int i=start,j=end;i<j;)
	{
		if(arr[i]+arr[j]<num)i++;
		else if(arr[i]+arr[j]>num)j--;
		else // sum = num
		{
			if(arr[i]==arr[j])// means all in between are also same .. total combinations will be (n*n-1)/2
			{
				count += (j -i +1)*(j-i)/2;
				break;
			}
			int lcount = 1;
			while(i<j&&arr[i]==arr[i+1])
			{
				lcount++;
				i++;
			}
			int rcount = 1;
			while(i<j&&arr[j]==arr[j-1])
			{
				rcount++;
				j--;
			}
			count+=lcount*rcount;
			i++;
            j--;
		}
	}
	return count;
}
int tripletSum(int *arr, int n, int num)
{
	sort(arr,arr+n);
	int count = 0;
	for(int i=0;i<n;i++)
	{	
		int pairSumFor=num-arr[i];
		int numPairs=pairSum(arr,(i+1),(n-1),pairSumFor);
		count+=numPairs;
	}
	return count;
}
