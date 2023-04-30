void trimSpaces(char *input)
{
    int i, j;
    for (i = 0, j = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ' ')
        {
            input[j] = input[i];
            j++;
        }
    }
    input[j] = '\0';
}