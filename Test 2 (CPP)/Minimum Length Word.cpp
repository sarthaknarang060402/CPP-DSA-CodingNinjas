/* input - Input String
 *  output - Save the result in the output array (passed as argument). You don’t have to
 *  print or return the result
 */
void minLengthWord(char input[], char output[])
{
    int minlength = 100000;
    int index;
    for (int i = 0; input[i] != '\0'; i++)
    {
        int len = 0;
        while (input[i] != ' ' && input[i] != '\0')
        {
            i++;
            len++;
        }
        if (len < minlength)
        {
            minlength = len;
            index = i - minlength;
        }
        if (input[i] == '\0')
            break;
    }
    int l = 0;
    for (int k = index, l = 0; input[k] != ' ' && input[k] != '\0'; k++, l++)
    {
        output[l] = input[k];
    }
}
