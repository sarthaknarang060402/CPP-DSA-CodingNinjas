// Take input a stream of n integer elements, find the second largest element present.
// The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
// Input format :

// Line 1 : Total number of elements (n)

// Line 2 : N elements (separated by space)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int lar = INT_MIN;
    int slar = INT_MIN;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > slar && num < lar)
        {
            slar = num;
        }
        if (num > lar)
        {
            slar = lar;
            lar = num;
        }
    }
    cout << slar;
    return 0;
}