bool isMaxHeap(int arr[], int n)
{
    for (int i = 0; 2 * i + 1 < n; i++)
    {
        int parent = arr[i];
        int lchild = arr[2 * i + 1];
        int rchild = arr[2 * i + 2];
        if (max(parent, max(lchild, rchild)) == parent)
            continue;
        else
            return 0;
    }
    return 1;
}