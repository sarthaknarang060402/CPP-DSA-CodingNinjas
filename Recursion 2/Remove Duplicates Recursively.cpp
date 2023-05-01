#include <cstring>
void removeConsecutiveDuplicates(char *input)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given string itself.
     * No need to return or print anything
     * Taking input and printing output is handled automatically.
     */
    if (input[0] == '\0')
        return;
    if (input[0] == input[1])
    {
        for (int i = 0; i < strlen(input); i++)
        {
            input[i] = input[i + 1];
        }
        removeConsecutiveDuplicates(input);
    }
    else
        removeConsecutiveDuplicates(input + 1);
}