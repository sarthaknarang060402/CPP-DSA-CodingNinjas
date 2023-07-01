#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool exist=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			exist=1;
			cout<<i<<" ";
		}
	}
    if(exist)return 0;
	cout<<-1;
	return 0;
}
