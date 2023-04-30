void removeConsecutiveDuplicates(char input[])
{
    // Write your code here

    int j = 1;
    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] == input[i - 1])
        {
            continue;
        }
        else
            input[j++] = input[i];
    }
    input[j] = '\0';
}