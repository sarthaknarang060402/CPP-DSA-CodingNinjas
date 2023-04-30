bool checkMember(int n)
{
    int a = 0, b = 1, c;
    if (a < n)
    {
        while (a < n)
        {
            c = a + b;
            a = b;
            b = c;
        }
    }
    if (a == n)
        return 1;
    else
        return 0;
}