#include <cmath>
double geometricSum(int k)
{
    if (k == 0)
        return 1;
    int sum = 0;
    sum = 1 / (pow(2, k)) + geometricSum(k - 1);
}