#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int sum = (n*(n+1))/2;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<sum-i+j<<" ";
		}
		sum=sum-i-1;
		cout<<endl;
	}
  return 0;
}
