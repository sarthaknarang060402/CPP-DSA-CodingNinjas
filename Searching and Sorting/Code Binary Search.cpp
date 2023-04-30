int binarySearch(int *input, int n, int val)
{
    int start = 0, end = n - 1, mid;
    for (; start <= end;)
    {
        mid = (start + end) / 2;
        if (input[mid] > val)
            end = mid - 1;
        else if (input[mid] < val)
            start = mid + 1;
        else // if(input[mid]==val)
            return mid;
    }
    return -1;
}