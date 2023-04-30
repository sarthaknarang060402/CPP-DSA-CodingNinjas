void sortZeroesAndOne(int *input, int size)
{
    int temp, i, ones = 0, zeroes = 0;
    for (i = 0; i < size; i++)
    {
        if (input[i] == 1)
            ones++;
        else
            zeroes++;
    }

    // filling zeros
    for (int j = 0; j < size; j++)
    {
        if (zeroes > 0)
        {
            input[j] = 0;
            zeroes--;
        }
        else
            input[j] = 1;
    }
}