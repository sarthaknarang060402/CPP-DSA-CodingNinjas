int size(char str[])
{
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}

bool checkPalindrome(char str[])
{
    int flag = 0;
    int n = size(str);
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
            flag = 1;
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}
