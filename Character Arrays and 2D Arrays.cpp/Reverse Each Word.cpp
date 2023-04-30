#include <cstring>
void reverse(char input[], int i, int j)
{
    for (; i <= j; i++, j--)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}
void reverseEachWord(char input[])
{
    int length = strlen(input);
    // reversing words
    for (int k = 0, l = 0; input[l] != '\0'; l = ++k)
    {
        while (input[k] != ' ' && input[k] != '\0') // 01234x
        {
            k++;
        }
        // k=5 l=0  k=8 l=6
        reverse(input, l, k - 1); // 0to4  6to7
        if (input[k] == '\0')
            break;
    }
}