#include <string>
using namespace std;
void solve(string input,string out,string output[],int &idx)
{
    if(input.empty())
    {
        output[idx++]=out;
        return;
    }
    int len = input.size();
    for(int i=0;i<len;i++)
    {
        solve(input.substr(0,i)+input.substr(i+1),out+input[i],output,idx);
    }
}
int returnPermutations(string input, string output[])
{
	int idx = 0;
	solve(input,"",output,idx);
	return idx;
}
