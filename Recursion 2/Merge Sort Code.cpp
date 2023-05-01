void mergetwo(int input[], int low, int high)
{
    // making two subarrays L and R to store
    int mid = low + (high - low) / 2;
    int s1 = mid - low + 1;
    int s2 = high - mid;
    int L[s1];
    int R[s2];
    // filling the subarrays
    for (int i = 0; i < s1; i++)
    {
        L[i] = input[i + low];
    }
    for (int j = 0; j < s2; j++)
    {
        R[j] = input[j + mid + 1];
    }

    int i = 0, j = 0, k = low;

    while ((i < s1) && (j < s2))
    {
        if (L[i] <= R[j])
            input[k++] = L[i++];
        else
            input[k++] = R[j++];
    }
    while (i < s1)
        input[k++] = L[i++];
    while (j < s2)
        input[k++] = R[j++];
}

void mergesort(int a[], int si, int ei)
{
    if (si >= ei)
        return;
    int mid = si + (ei - si) / 2;
    mergesort(a, si, mid);
    mergesort(a, mid + 1, ei);
    mergetwo(a, si, ei);
}

void mergeSort(int input[], int size)
{
    if (size == 0)
        return;
    mergesort(input, 0, size - 1);
}
