void arrange(int *arr, int n)
{
    // Write your code here
    int val = 1;
    int k;
    if (n % 2 == 0)
        k = 0;
    else
        k = 1;
    for (int i = 0; i < n / 2 + k; i++)
    {
        arr[i] = val;
        val += 2;
    }
    val -= 1 + 2 * k;
    for (int i = (n / 2) + k; i < n; i++)
    {
        arr[i] = val;
        val -= 2;
    }
}