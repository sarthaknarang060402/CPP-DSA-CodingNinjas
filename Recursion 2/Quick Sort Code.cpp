void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int input[], int start, int end)
{
    int pivot = input[start];

    int count = 0; // element smaller than pivot
    for (int k = start + 1; k <= end; k++)
    {
        if (pivot >= input[k])
            count++;
    }

    int pivotIndex = start + count;
    swap(input[pivotIndex], input[start]);

    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (input[i] <= pivot)
            i++;

        while (input[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(input[i++], input[j--]);
        }
    }
    return pivotIndex;
}
void quicksort(int input[], int start, int end)
{
    if (start >= end)
        return;

    int c = partition(input, start, end);
    quicksort(input, start, c - 1);
    quicksort(input, c + 1, end);
}
void quickSort(int input[], int size)
{
    quicksort(input, 0, size - 1);
}