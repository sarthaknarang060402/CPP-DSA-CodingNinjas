#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // n is odd
    int fh = (n / 2) + 1; // first half
    int sh = n / 2;
    for (int i = 0; i < fh; i++)
    {
        for (int j = 0; j < fh - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < sh; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (sh - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}