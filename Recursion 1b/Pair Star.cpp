#include <cstring>
void pairStar(char input[])
{
    // Write your code here
    if (input[0] == '\0')
        return;
    int size = strlen(input);
    if (input[0] == input[1])
    {
        for (int i = size; i > 1; i--)
        {
            input[i] = input[i - 1];
        }
        input[1] = '*';
        input[size + 1] = '\0';
        pairStar(input + 1);
    }
    else
        pairStar(input + 1);
}