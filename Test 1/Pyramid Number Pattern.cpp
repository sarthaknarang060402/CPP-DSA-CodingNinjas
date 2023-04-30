// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        for (int j = 0; j < i; j++)
        {
            cout << j + 2;
        }
        cout << endl;
    }
    return 0;
}