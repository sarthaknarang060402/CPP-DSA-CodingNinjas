#include <unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k)
{
    // Write your code here

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    int count = 0;

    // corner case
    if (k == 0)
    {
        for (auto itr : frequency)
        {
            if (itr.second >= 2)
            {
                count += ((itr.second) * (itr.second - 1)) / 2; // n choose 2
            }
        }
    }
    else
    { // Standard Case
        for (auto itr : frequency)
        {
            if (frequency.find(itr.first - k) != frequency.end())
            {
                count += itr.second * frequency[itr.first - k];
            }

            if (frequency.find(itr.first + k) != frequency.end())
            {
                count += itr.second * frequency[itr.first + k];
            }

            frequency[itr.first] = 0;
        }
    }

    return count;
}
