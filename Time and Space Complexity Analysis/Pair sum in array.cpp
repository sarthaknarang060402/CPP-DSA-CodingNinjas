/*Time Complexity : O(n *log(n)) Space Complexity
    : O(1) where n is size of input Array
    / List */
int pairSum(int *arr, int n, int num)
{
    sort(arr, arr + n);
    int startIndex = 0;
    int endIndex = n - 1;
    int numPairs = 0;
    while (startIndex < endIndex)
    {
        if (arr[startIndex] + arr[endIndex] < num)
        {
            startIndex++;
        }
        else if (arr[startIndex] + arr[endIndex] > num)
        {
            endIndex--;
        }
        else
        {
            int elementAtStart = arr[startIndex];
            int elementAtEnd = arr[endIndex];
            if (elementAtStart == elementAtEnd)
            {
                int totalElementsFromStartToEnd = (endIndex - startIndex) + 1;
                numPairs += (totalElementsFromStartToEnd *
                             (totalElementsFromStartToEnd - 1) / 2);
                return numPairs;
            }
            int tempStartIndex = startIndex + 1;
            int tempEndIndex = endIndex - 1;
            while (tempStartIndex <= tempEndIndex &&
                   arr[tempStartIndex] == elementAtStart)
            {
                tempStartIndex += 1;
            }
            while (tempEndIndex >= tempStartIndex &&
                   arr[tempEndIndex] == elementAtEnd)
            {
                tempEndIndex -= 1;
            }
            int totalElementsFromStart = (tempStartIndex - startIndex);
            int totalElementsFromEnd = (endIndex - tempEndIndex);
            numPairs += (totalElementsFromStart * totalElementsFromEnd);
            startIndex = tempStartIndex;
            endIndex = tempEndIndex;
        }
    }
    return numPairs;
}