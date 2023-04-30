int findDuplicate(int *arr, int n)
{
    int sum = 0;
    int sum0toNminus2 = (n - 2) * (n - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum - sum0toNminus2;
}