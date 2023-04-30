int duplicateNumber(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count += 1;
        }
        if (count > 1)
            return arr[i];
    }
}