void sort012(int *arr, int n)
{
    int out[n];
    int i, k;
    for (i = 0, k = 0; i < n; i++)
    {
        if (arr[i] == 0)
            out[k++] = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            out[k++] = 1;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 2)
            out[k++] = 2;
    }
    for (int j = 0; j < n; j++)
    {
        arr[j] = out[j];
    }
}