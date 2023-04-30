void bubbleSort(int *input, int size)
{
    while (size - 1 > 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                int temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
            }
        }
        size--;
    }
}