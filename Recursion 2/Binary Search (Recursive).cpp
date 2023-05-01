// input - input array
// size - length of input array
// element - value to be searched
int binarysearch(int input[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (x == input[mid])
        return mid;
    else if (x > input[mid])
        binarysearch(input, mid + 1, high, x);
    else
        binarysearch(input, low, mid - 1, x);
}
int binarySearch(int input[], int size, int element)
{
    if (size == 0)
        return -1;
    int x = binarysearch(input, 0, size - 1, element);
    return x;
}
