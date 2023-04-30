int arrayRotateCheck(int *input, int size)
{
    if (size == 0)
        return 0;
    int length = 1;
    for (int i = 0; i < size; i++)
    {
        if (input[i] < input[i + 1])
        {
            length++;
        }
        else
        {
            return length;
        }
        if (length == size)
            return 0;
    }
    return length;
}