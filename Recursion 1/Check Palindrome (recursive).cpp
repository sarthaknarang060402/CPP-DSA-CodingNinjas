#include <cstring>
bool checkhelp(char input[], int start, int end)
{
    int size = end - start + 1; // 5
    if (size == 0 || size == 1)
        return 1;
    bool ans;
    if (input[start] == input[end]) // 0 4
    {
        ans = checkhelp(input, start + 1, end - 1); // 1 3 2 2
    }
    else
        ans = 0;
    return ans;
}
bool checkPalindrome(char input[])
{
    // Write your code here
    int size = strlen(input);
    return checkhelp(input, 0, size - 1);
}