#include <iostream>
#include <string>
using namespace std;
void solve(string input,string out)
{
    if(input.empty())
    {
        cout<<out<<endl;
        return;
    }
    int len = input.size();
    for(int i=0;i<len;i++)
    {
        solve(input.substr(0,i)+input.substr(i+1),out+input[i]);
    }
}
void printPermutations(string input)
{
    solve(input,"");
}
