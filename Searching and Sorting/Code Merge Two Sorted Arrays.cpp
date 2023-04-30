void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i, j, k = 0;
    for (i = 0, j = 0; i < size1 & j < size2; k++)
    {
        if (arr1[i] <= arr2[j])
        {
            ans[k] = arr1[i];
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            j++;
        }
    }

    if (i == size1)
    {
        while (j != size2)
        {
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
    if (j == size2)
    {
        while (i != size1)
        {
            ans[k] = arr1[i];
            i++;
            k++;
        }
    }
}
