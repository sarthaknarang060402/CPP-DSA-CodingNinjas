void pushZeroesEnd(int *arr, int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
            arr[j++] = arr[i];
    }
    while (j != size)
    {
        arr[j++] = 0;
    }
}