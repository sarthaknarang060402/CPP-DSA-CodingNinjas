int arrayRotateCheck(int *arr, int size)
{
    for(int i = 0;i<size -1;i++)
    {
        if(arr[i]>arr[i+1])return i+1;
    }
    return 0;
}
