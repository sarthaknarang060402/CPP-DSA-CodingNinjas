int countZeros(int n)
{
    if (n == 0)
        return 1;
    if (n < 10)
        return 0;
    int ans;
    if (n % 10 == 0)
    {
        ans = 1 + countZeros(n / 10);
    }
    else
        ans = countZeros(n / 10);

    return ans;
}