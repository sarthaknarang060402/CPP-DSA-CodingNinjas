char highestOccurringChar(char input[])
{
    int freq[256] = {0};
    for (int i = 0; input[i] != '\0'; i++)
    {
        freq[int(input[i])]++;
    }
    int max = freq[int(input[0])];
    char letter = input[0];
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (max < freq[input[i]])
        {
            max = freq[int(input[i])];
            letter = input[i];
        }
    }
    return letter;
}