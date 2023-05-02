#include <unordered_set>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
{
    // Your Code goes here

    unordered_set<int> elements;

    for (int i = 0; i < n; i++)
    {
        elements.insert(arr[i]); // Inserting elements into the hash
    }

    int maxLength = 0;
    int startingElement;
    int endingElement;

    for (int i = 0; i < n; i++)
    {
        // We check if the current element is the starting element of the any
        // subsequence
        if (elements.find(arr[i] - 1) !=
            elements
                .end())
        { // -> there is a consecutive smaller element in the hash
            continue;
        }
        else
        {
            int next = arr[i];
            while (elements.find(next) != elements.end())
            {
                next++;
            }
            if (maxLength < next - arr[i])
            {
                maxLength = next - arr[i];
                startingElement = arr[i];
                endingElement = next - 1;
            }
        }
    }

    if (maxLength == 1)
    {
        return {startingElement};
    }
    else
    {
        return {startingElement, endingElement};
    }
}
