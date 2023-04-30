void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int *input, int start, int end)
{
    for (int i = start; i <= (start + end) / 2; i++)
    {
        swap(input[i], input[end - i + start]);
    }
}
void rotate(int *input, int d, int n)
{
    // reverse full array
    reverse(input, 0, n - 1);
    // reverse n-d elements
    reverse(input, 0, n - d - 1);
    // //reverse last d elements
    reverse(input, n - d, n - 1);
}