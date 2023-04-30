void removeAllOccurrencesOfChar(char input[], char c)
{
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != c)
        {
            input[j] = input[i];
            j++;
        }
    }
    input[j] = '\0';
}