int findLength(char *str)
{
    int ans=0;
    int i=0;
    while(str[i++]!='\0')ans++;
    return ans;
}
void func(char *str) 
{
    int len=findLength(str);
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
