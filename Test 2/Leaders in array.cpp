void Leaders(int *arr, int len)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print your output exactly in the same format as shown.
     * Don't print any extra line.
     */
    for (int i = 0; i < len; i++)
    {
        int flag = 0;
        for (int j = i; j < len;)
        {
            if (arr[i] >= arr[j] && j < len)
            {
                j++;
            }
            else
                break;

            if (j == len)
                flag = 1; // leader yesss
        }

        if (flag == 1)
            cout << arr[i] << " ";
    }
}
