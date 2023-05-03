#include <cmath>
#include <vector>

int helper(int a, int b, int curr, int currSum)
{

    int result = 0;
    int p = pow(curr, b);

    while (p + currSum < a)
    {
        result += helper(a, b, curr + 1, currSum + p);
        curr++;
        p = pow(curr, b);
    }
    if (p + currSum == a)
    {
        result++;
    }

    return result;
}

int getAllWays(int a, int b)
{
    // Write your code here
    return helper(a, b, 1, 0);
}