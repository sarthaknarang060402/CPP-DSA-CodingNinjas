#include <bits/stdc++.h>
bool checkAB(char input[])
{
    if (strlen(input) == 0)
        return 1;
    if (input[0] != 'a')
    {
        return 0;
    }
    if (input[0] == 'a')
    {
        if (strlen(input) > 2)
        {
            if (input[1] == 'b' && input[2] == 'b')
                return checkAB(input + 3);
        }
        return checkAB(input + 1);
    }
    return 0;
}