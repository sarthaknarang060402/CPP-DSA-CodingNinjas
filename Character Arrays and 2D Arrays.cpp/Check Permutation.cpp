#include <cstring>
bool isPermutation(char input1[], char input2[])
{
    char freq[256] = {0};
    for (int i = 0; input1[i] != '\0'; i++)
    {
        freq[int(input1[i])]++;
    }
    for (int i = 0; input2[i] != '\0'; i++)
    {
        freq[int(input2[i])]--;
    }
    int flag = 0;
    for (int j = 0; j < 256; j++)
    {
        if (freq[j] != 0)
            flag = 1;
    }
    if (flag)
        return 0;
    else
        return 1;
}