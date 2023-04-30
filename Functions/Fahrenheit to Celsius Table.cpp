void printTable(int start, int end, int step)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    while (start <= end)
    {
        int cel = ((start - 32) * 5) / 9;
        cout << start << " " << cel << endl;
        start += step;
    }
}