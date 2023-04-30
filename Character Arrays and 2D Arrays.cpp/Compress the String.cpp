string getCompressedString(string &input)
{
    int i = 0;
    int j = 0;
    char output[input.length()];
    for (; input[i] != '\0'; i++)
    {
        int count = '1';
        while (input[i] == input[i + 1])
        {
            count++;
            i++;
        }
        output[j] = input[i];
        j++;
        if (count != '1')
        {
            output[j] = count;
            j++;
        }
    }
    output[j] = '\0';
    return output;
}