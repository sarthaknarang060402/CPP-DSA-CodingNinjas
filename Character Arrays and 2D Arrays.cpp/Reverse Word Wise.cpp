int size(char input[])
{
    int s;
    for (s = 0; input[s] != '\0'; s++)
    {
    }
    return s;
}
void reverse(char input[], int i, int j)
{
    for (; i < j; i++, j--)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseStringWordWise(char input[])
{
    int length = size(input);
    // reverse full string
    reverse(input, 0, length - 1);
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