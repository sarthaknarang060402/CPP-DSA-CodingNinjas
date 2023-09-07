void solve(string input,string out,string output[10000],int &idx)
{
    if(input.empty()){
        output[idx]=out;
        idx++;
        return;
    }
    char c1 = input[0]-'0' + 'a' - 1;
    int b = (input[0]-'0')*10 + input[1]-'0';
    char c2 = b + 'a' -1;
    solve(input.substr(1),out+c1,output,idx);
    if(b>=10&&b<=26)
        solve(input.substr(2),out+c2,outut,idx);
}

int getCodes(string input, string output[10000])
{
    int idx =0;
    solve(input,"",output,idx);
    return idx;
}
