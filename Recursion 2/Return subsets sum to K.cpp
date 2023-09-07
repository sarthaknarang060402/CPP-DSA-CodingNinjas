int subsetSumToK(int input[], int n, int output[][50], int k)
{
	if(n==0)
	{
		if(k==0)
		{
			output[0][0]=0;
			return 1;
		}
		else return 0;
	}
	int nottake = subsetSumToK(input+1,n-1,output,k); // this will add to the output.. 
	int take = subsetSumToK(input+1,n-1,output + nottake ,k - input[0]); 
	int subsets = nottake + take ;
	for(int i=nottake;i<subsets;i++)
	{
		for(int j=output[i][0];j>0;j--)
		{
			output[i][j+1]=output[i][j];
		}
		output[i][1]=input[0];
		output[i][0]++;
	}
	return subsets;
}
