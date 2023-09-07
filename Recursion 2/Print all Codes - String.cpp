#include <string.h>
using namespace std;

void solve(string input,string output)
{
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    char c1 = input[0]-'0' + 'a' - 1;
    int b = (input[0]-'0')*10 + input[1]-'0';
    char c2 = b + 'a' -1;
    solve(input.substr(1),output+c1);
    if(b>=10&&b<=26)
        solve(input.substr(2),output+c2);

}
void printAllPossibleCodes(string input)
{
    solve(input,"");
}
