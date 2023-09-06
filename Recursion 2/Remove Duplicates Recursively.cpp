#include<cstring>
void removeConsecutiveDuplicates(char *S) 
{
	if(S[0]=='\0')return;
	if(S[0]==S[1])
	{
		for(int i=0;i<strlen(S);i++)S[i]=S[i+1];
		removeConsecutiveDuplicates(S);
	}
	else removeConsecutiveDuplicates(S+1);
}
