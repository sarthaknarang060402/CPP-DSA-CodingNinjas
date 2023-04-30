void helper(int input[], int current, int size, int x, int output[], int &k)
{
    if (current == size)
        return;
    if (input[current] == x)
    {
        output[k++] = current;
    }
    helper(input, current + 1, size, x, output, k);
}
int allIndexes(int input[], int size, int x, int output[])
{
    int k = 0;
    helper(input, 0, size, x, output, k);
    return k;
}