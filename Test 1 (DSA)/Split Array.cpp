bool possibility(int *input, int size, int index, int lsum, int rsum)
{
    if (index == size)
        return lsum == rsum;
    if (input[index] % 5 == 0)
    {
        lsum += input[index];
        return possibility(input, size, index + 1, lsum, rsum);
    }
    else if (input[index] % 3 == 0)
    {
        rsum += input[index];
        return possibility(input, size, index + 1, lsum, rsum);
    }
    else
        possibility(input, size, index + 1, lsum + input[index], rsum) || possibility(input, size, index + 1, lsum, rsum + input[index]);
}
bool splitArray(int *input, int size)
{
    return possibility(input, size, 0, 0, 0);
}
