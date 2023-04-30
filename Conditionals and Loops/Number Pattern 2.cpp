#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int k = n - 1;
        while (k >= i)
        {
            cout << " ";
            k--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1;
            j++;
        }
        cout << endl;
        i++;
    }
}