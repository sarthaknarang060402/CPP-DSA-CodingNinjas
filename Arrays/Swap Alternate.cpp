void swapAlternate(int *arr, int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 == n)
            break;
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}